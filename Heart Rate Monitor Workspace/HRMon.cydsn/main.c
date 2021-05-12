/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "tgmath.h" 

void saveDigitsToRAM();
void writeDisplay();

void pulseDot();
void measurePulse();
void startSequence();
int getDigitIndex(int inputIndex);

CY_ISR(sleepMode) {//timer to activate this ISR enabled once finger removed, enabled by default at start
    // triggered once every second by 1Hz timer
    // turn on IR LEDs
    // check for phototransistor reception somehow
    // if phototransistor receives input, activate other timer to begin measurement and disable the 1Hz timer for this ISR
    // if not, end this ISR and wait for it to be triggered again
    if lux > threshold {    //testing to see if lux has been detected that means finger inserted - might need to flip this based on whether it gets brighter or darker when finger inserted
        fingerDetected = 1;     //set high to trigger activation loop
    }
    else {  //if no finger detected, continue on sleep mode functions every second
        pulseDot() //calling pulsedot function once every second
    }
        
        
        
}

void measurePulse() {
    // 
}

// hex values to be sent to 7 seg display for active low
// these could be preprocessor commands instead (#define)
int zero = 0xC0;
int one = 0xF9;
int two = 0xA4;
int three = 0xB0;
int four = 0x99;
int five = 0x92;
int six = 0x82;
int seven = 0xF8;
int eight = 0x80;
int nine = 0x98;


// digit variables (not completely necessary, but a good indicator of one-hot display encoding)
int digitThree = 1;
int digitTwo = 2;
int digitOne = 4;
int digitZero = 8;

int detectFlag;
int detectFlag;

long unsigned int displayData[4]; // 0 = ones digit, MSB = decimal point, bits 0 to 7 are the number
int digit[4]; // should be a local var


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    isr_1_ClearPending();
    isr_1_StartEx(sleepMode);
    
    
    //One_Hz_Timer_Enable(); //unnecessary, _Start encompasses this
    One_Hz_Timer_Start(); // enabled by default, as unit starts in sleep mode
    
    /*
    EEPROM_Start();
    EEPROM_WriteByte(15,0); // we are group 15
    //EEPROM_WriteByte(units,1);
    int teamNumber = EEPROM_ReadByte(0);
    */
    EEPROM_Start();
    int teamNumber = EEPROM_ReadByte(0);
    
    digit[0] = 1;
    digit[1] = 2;//testing % 10;
    digit[2] = 3;
    digit[3] = 4;
    saveDigitsToRAM();
    
    for(;;) {
        //Finger detecting thresholding - will need input from IR so commented for now
        //only test finger detected every second, pulse IR to see if Lux > threshold
        /*
        if (fingerDetected = 1) { //Main loop for detected finger
            detectFlag = 1; 
        }
        else {  //pulsing if no light detected so no finger detected - might need to flip this for thresholding lower or higher
            pulseDot() //get this to run every time the timer signal @ 1hz
        }
        */
        
        
        

        
        writeDisplay(displayData);
    }
}

int getDigitIndex(int inputIndex) {
	int currentDigit = powl(2,inputIndex);
	int currentDigitInverted = powl(2,8)-1 - currentDigit;
	return currentDigitInverted;
}

void saveDigitsToRAM() {
    for(int index = 0; index < 4; index++) { // loop through digits 0 to 3
        //int currentDigit = powl(2,index);
        //Digit_Reg_Write(currentDigit);
        
        switch(digit[index]) {
        case 0:
            //Seven_Segment_Reg_Write(zero);
            displayData[index] = zero;
            break;
        case 1:
            //Seven_Segment_Reg_Write(one);
            displayData[index] = one;
            break;
        case 2:
            //Seven_Segment_Reg_Write(two);
            displayData[index] = two;
            break;
        case 3:
            //Seven_Segment_Reg_Write(three);
            displayData[index] = three;
            break;
        case 4:
            //Seven_Segment_Reg_Write(four);
            displayData[index] = four;
            break;
        case 5:
            //Seven_Segment_Reg_Write(five);
            displayData[index] = five;
            break;
        case 6:
            //Seven_Segment_Reg_Write(six);
            displayData[index] = six;
            break;
        case 7:
            //Seven_Segment_Reg_Write(seven);
            displayData[index] = seven;
            break;
        case 8:
            //Seven_Segment_Reg_Write(eight);
            displayData[index] = eight;
            break;
        case 9:
            //Seven_Segment_Reg_Write(nine);
            displayData[index] = nine;
            break;
        }
        
        if(index == 1) { // 2nd most significant digit
            displayData[index] = displayData[index] + powl(2,7); //works
        }
    }
    
    // digit pin high = digit SELECTED
    // segment pin low = segment ILLUMINATED
}

void writeDisplay(long unsigned int displayData[4]) {
    for(int index = 0; index < 4; index++) { // loop through digits 0 to 3 (all digits)
        int currentDigit = getDigitIndex(index);
        
        Digit_Reg_Write(currentDigit); // correct way, just inverted bits
        //Digit_Reg_Write(15);
        
        Seven_Segment_Reg_Write(displayData[index]);
        CyDelay(1); // for stability
    }
}

void pulseDot() {   //pulsing decimal for sleep mode, call on a 2hz 50% duty cycle (every 1 hz trigger function)
    if(detectFlag == 0) { // dot is off
        displayData[3] = displayData[3] + powl(2,7);    //setting MSB of final digit high, will be decimal point
        detectFlag = 1;     //change trigger so that will change to turn off decimal next time step
    }
    else if(detectFlag == 1) {
        displayData[3] = displayData[3] - powl(2,7);
        detectFlag = 0;
    }
}

void startSequence() {
    // blink all digits for 1 sec each
	for(int i=0; i<4; i++) {
		//displayData[i] = eight;
        int currentDigit = getDigitIndex(i);
        Digit_Reg_Write(currentDigit);
        
		Seven_Segment_Reg_Write(eight);
        
        CyDelay(1000);
	}
    
    // display group number
    int teamNumber = EEPROM_ReadByte(0);
    
    digit[0] = 0;
    digit[1] = 0; //testing % 10;
    digit[2] = ((teamNumber/10) % 10);
    digit[3] = (teamNumber % 10);
    saveDigitsToRAM();
    writeDisplay(displayData);
}


/*

// 7 segment testing code
EEPROM_Start();
    int teamNumber = EEPROM_ReadByte(0);
    
    digit[0] = 1;
    digit[1] = 2;//testing % 10;
    digit[2] = 3;
    digit[3] = 4;
    saveDigitsToRAM();
    
    for(;;) {
        for(int index = 0; index < 4; index++) { // loop through digits 0 to 3
            int currentDigit = powl(2,index);
            int currentDigitInverted = powl(2,8)-1 - currentDigit;
            
            
            
            Digit_Reg_Write(currentDigitInverted); // correct way, just inverts bits
            //Digit_Reg_Write(15);
            
            Seven_Segment_Reg_Write(displayData[index]);
            CyDelay(1);
            
        }
    }
*/
