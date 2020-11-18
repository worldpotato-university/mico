/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/


void sendSOS(){
  sendS();
  delay(100);
  sendO();
  delay(100);
  sendS();
  delay(2000);

}

void sendS(){
      Serial.println("Send S");
  for(int i = 0; i < 3; i++){

    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);   
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);                
  }
}

void sendO(){
      Serial.println("Send O");
  for(int i = 0; i < 3; i++){

    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);   
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
  }
}
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 sendSOS();                 // wait for a second
}
