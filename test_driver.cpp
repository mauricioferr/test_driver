#include <wiringPi.h>

int main(void){
    const int HIGH = 1;
    const int LOW = 0;

    const int A1 = 16;
    const int A2 = 20;
    const int AEn = 13; 

    void pinMode (A1, int OUTPUT) ;
    void pinMode (A2, int OUTPUT) ;
    void pinMode (AEn, int PWM_OUTPUT) ;

    
    const int B1 = 26;
    const int B2 = 21;
    const int BEn = 19;

    void pinMode (A1, int OUTPUT) ;
    void pinMode (A2, int OUTPUT) ;
    void pinMode (AEn, int PWM_OUTPUT) ;

    while (1){
        void digitalWrite (A1, HIGH) ;
        void digitalWrite (A2, LOW) ;
        void pwmWrite (AEn, 155) ;
        delay(1500) ;
        void digitalWrite (A1, LOW) ;
        void digitalWrite (A2, HIGH) ;
        void pwmWrite (AEn, 155) ;
        delay(1500) ;
    }
    return 0;
}