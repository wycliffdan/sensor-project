void setup() {
  // put your setup code here, to run once:
  

  pinMode(13, OUTPUT);

    // Initialize serial communication at a specific baud rate
    
   Serial.begin(9600);
   Serial.println("hello world!");
   

}

void loop() {
  // put your main code here, to run repeatedly: 

digitalWrite(13,HIGH);
Serial.println("ON");
delay(2000);
digitalWrite(13,LOW);
Serial.println("OFF");
delay(500);
digitalWrite(13,HIGH);
Serial.println("ON");
delay(1000);
digitalWrite(13,LOW);
Serial.println("OFF");
delay(5000);
digitalWrite(13,HIGH);
Serial.println("ON");
delay(500);
}
