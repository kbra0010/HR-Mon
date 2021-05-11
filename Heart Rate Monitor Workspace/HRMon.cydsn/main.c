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
void pulseDot();


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

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    
    
    
    
    
    
    digit[0] = 1;
    digit[1] = 2;
    digit[2] = 3;
    digit[3] = 4;
    saveDigitsToRAM();
    
    for(;;) {
        //Finger detecting thresholding
        if (lux > threshold) { //Main loop for detected finger
            detectFlag = 1; 
        }
        else {  //pulsing if no detectoin
            displayData[3] = powl(2,7);
            Seven_Segment_6(1);
        }
        
        
        

        
        for(int index = 0; index < 4; index++) { // loop through digits 0 to 3
            int currentDigit = powl(2,index);
            int currentDigitInverted = powl(2,8)-1 - currentDigit;
            
            
            
            Digit_Reg_Write(currentDigitInverted); // correct way, just inverts bits
            //Digit_Reg_Write(15);
            
            Seven_Segment_Reg_Write(displayData[index]);
            CyDelay(1);
        }
    }
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

void pulseDot() {
    if(detectFlag == 0) { // dot is off
        displayData[3] = displayData[3] + powl(2,7);    //setting MSB of final digit high, will be decimal point
        detectFlag = 1;     //change trigger so that will change to turn off decimal next time step
    }
    else if(detectFlag == 1) {
        displayData[3] = displayData[3] - powl(2,7);
        detectFlag = 0;
    }
}


