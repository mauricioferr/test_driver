#include <wiringPi.h>

int main(void){
    const int high = 1;
    const int low = 0;

    const int A1 = 16;
    const int A2 = 20;
    const int AEn = 13; 
    
    const int B1 = 26;
    const int B2 = 21;
    const int BEn = 19;
    
    wiringPiSetup () ;

    pinMode (A1, OUTPUT) ;
    pinMode (A2, OUTPUT) ;
    pinMode (AEn, PWM_OUTPUT) ;

    pinMode (B1, OUTPUT) ;
    pinMode (B2, OUTPUT) ;
    pinMode (BEn, PWM_OUTPUT) ;

    while (1){
        digitalWrite (A1, high) ;
        digitalWrite (A2, low) ;
        pwmWrite (AEn, 155) ;
        delay(1500) ;
        digitalWrite (A1, low) ;
        digitalWrite (A2, high) ;
        pwmWrite (AEn, 155) ;
        delay(1500) ;
    }
    return 0;
}
