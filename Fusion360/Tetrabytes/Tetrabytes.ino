#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27,20,4);
int servoPin = 9;
const int pos = 90;
Servo Servo1;
const unsigned long eventInterval = 5000;
unsigned long previousTime = 0;

void setup() {
  Serial.begin(9600);
  Servo1.attach(9);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Feeding Time...");       //display "Feeding time"
  lcd.setCursor(2,1);
  lcd.print("Every 20 secs");         //display time
  Servo1.write(140);                  //set initial pos of servo
}

void loop() {

  unsigned long currentTime = millis();
   if (currentTime - previousTime >= eventInterval) {
    Serial.println("food");
    Servo1.write(140);
    delay(20000);                     //set interval
    Servo1.write(pos);
    delay(100);
  
    previousTime = currentTime;       //reset timer
  }
}
