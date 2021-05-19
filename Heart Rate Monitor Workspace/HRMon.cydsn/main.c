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

// ----------------------- LIBRARIES -----------------------
#include "project.h"
#include "tgmath.h" 


// ----------------------- FUNCTIONS -----------------------
void saveDigitsToRAM();
void writeDisplay();

void pulseDot();
void measurePulse();
void startSequence();
int getDigitIndex(int inputIndex);

void programMode();
void activeMode();
void sleepMode();


// ----------------------- VARIABLES -----------------------
// hex values to be sent to 7 seg display for active low
// these could be preprocessor commands instead (#define)

// D.P + GFEDCBA
int zero = 0xC0;    // 11000000
int one = 0xF9;     // 11111001
int two = 0xA4;     // 10100100
int three = 0xB0;   // 10110000
int four = 0x99;    // 10011001
int five = 0x92;    // 10010010
int six = 0x82;     // 10000010
int seven = 0xF8;   // 11111000
int eight = 0x80;   // 10000000
int nine = 0x98;    // 10011000
int r = 0xAF;       // 10101111
int E = 0x86;       // 10000110
int A = 0x88;       // 10001000
int d = 0xA1;       // 10100001


// digit variables (not completely necessary, but a good indicator of one-hot display encoding)
int digitThree = 1;
int digitTwo = 2;
int digitOne = 4;
int digitZero = 8;

int pulseFlag;
int fingerDetected; //swap to bool?

long unsigned int displayData[4]; // 0 = ones digit, MSB = decimal point, bits 0 to 7 are the number
int digit[4]; // should be a local var


// ----------------------- ISR BOIS -----------------------


CY_ISR(oneHzISR) {//timer to activate this ISR enabled once finger removed, enabled by default at start
    // triggered once every second by 1Hz timer
    // turn on IR LEDs
    // check for phototransistor reception somehow
    // if phototransistor receives input, activate other timer to begin measurement and disable the 1Hz timer for this ISR
    // if not, end this ISR and wait for it to be triggered again
    
    //lux variable creation:
    //pulse irs to get lux reading
    //feed this into next if statement
    
    
    if (lux > threshold) {    //testing to see if lux has been detected that means finger inserted - might need to flip this based on whether it gets brighter or darker when finger inserted
        fingerDetected = 1;     //set high to trigger activation loop
        measurePulse(); //might be more efficienct method than above
    }
    else {  //if no finger detected, continue on sleep mode functions every second
        pulseDot(); //calling pulsedot function once every second
        fingerDetected = 0; //when no finger detected, go into sleep mode
    }              
}

void measurePulse() {
    /*
     Initially display "rEAd" while acquiring the first HR reading
	 Wait 2 sec
	 Display HR reading
	 Keep HR reading on screen, measure for the next 2 sec and then provide another reading
	 Read pulses and calculate HR
     Detect when finger gone, and if so, go into sleep mode
    */

    displayData[0] = r;
    displayData[1] = E;   //E = 10000110
    displayData[2] = A;   //A = 10001000
    displayData[3] = d;   //d = 10100001
}


// ----------------------- MAIN CODE -----------------------

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    isr_1_ClearPending();
    isr_1_StartEx(oneHzISR);
    
    
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
    
    startSequence();
    //CyDelay(1000);
    
    ///*
    displayData[0] = r; //10101111;  //r
    displayData[1] = E; //10110010;  //E
    displayData[2] = A; //two;       //A
    displayData[3] = d; //10100001;  //d = 10100001
    //*/
    
    for(;;) {
        //Finger detecting thresholding - will need input from IR so commented for now
        //only test finger detected every second, pulse IR to see if Lux > threshold
        /*
        if (fingerDetected = 1) { //Main loop for detected finger
            pulseFlag = 1; 
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
        
        // unsure if this is necessary
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
    if(pulseFlag == 0) { // dot is off
        displayData[3] = displayData[3] + powl(2,7);    //setting MSB of final digit high, will be decimal point
        pulseFlag = 1;     //change trigger so that will change to turn off decimal next time step
    }
    else if(pulseFlag == 1) {
        displayData[3] = displayData[3] - powl(2,7);
        pulseFlag = 0;
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
    
    CyDelay(1000);
    
    programMode();
}

void programMode() {
    
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
