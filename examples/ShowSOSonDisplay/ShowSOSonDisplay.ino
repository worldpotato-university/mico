/*
  LiquidCrystal Library - Hello World - Adopted to Key Pad Shield

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. Hence it will work with the LCD Display on 
 the Key Pad Shield

 This sketch prints "Hello World!" to the LCD and shows the time in 
 second since startup.

  The circuit - Pin numers adopted to the KeyPad Shield
 * LCD RS pin to digital pin 8
 * LCD Enable pin to digital pin 9
 * LCD D4 pin to digital pin 4
 * LCD D5 pin to digital pin 5
 * LCD D6 pin to digital pin 6
 * LCD D7 pin to digital pin 7
 
 See: https://www.dfrobot.com/wiki/index.php/LCD_KeyPad_Shield_For_Arduino_SKU:_DFR0009
 
 Adopted to Key Pad Shield by Mathias Moog, Hochschule Ansbach, 2017
 
 This example code is in the public domain. Original Source code is 
 part of the LiquidCrystal Library

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int sensorPin = A1;    // select the input pin for the potentiometer

void displayVoltage(){

  float u;
  float sensorValue = 0.0;

  sensorValue = analogRead(sensorPin);
  u = 5 * sensorValue/1023.0;
  
  lcd.setCursor(0, 0);
  lcd.print("SOS!");

  lcd.setCursor(0, 1);
  lcd.print(u);
}

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

}

void loop() {

displayVoltage();
delay(100);


}
