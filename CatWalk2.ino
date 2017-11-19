#include <Servo.h>

Servo servo;

int const PIR = 2;

void setup() {
    pinMode(PIR, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    servo.attach(0);
    servo.write(0);
    delay(5000);

}

void loop() {
    int valPIR = digitalRead(PIR);
    
    
    digitalWrite(LED_BUILTIN, HIGH);
    if(valPIR == HIGH){
        servo.write(180);
        delay(5000);
        servo.write(0);
    }
}
