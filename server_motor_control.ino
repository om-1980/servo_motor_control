#include<Servo.h>

Servo myservo;
int pos1 = 0; 
int led = 7; 
int button1Pin = 3;
int button2Pin = 5;
int button3Pin = 8;
int button4Pin = 13;
int button1State = 0;
int button2State = 0;
int button3State = 0;
int button4State = 0;
int servopin = 2;

void setup() {  
  Serial.begin(9600);
  myservo.attach(servopin); 
  pinMode(led , OUTPUT); 	
  pinMode(button1Pin , INPUT); 
  pinMode(button2Pin , INPUT);
  pinMode(button3Pin , INPUT);
  pinMode(button4Pin , INPUT);
}

void loop() { 
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);
  button4State = digitalRead(button4Pin);
  Serial.println(button1State);
  Serial.println(button2State);
  Serial.println(button3State);
  Serial.println(button4State);
  
  if (button1State == LOW){ 
    digitalWrite(led, HIGH);
    myservo.write(0);
    delay(1000);
    digitalWrite(led, LOW);
  }
  else if(button2State == LOW) {
    digitalWrite(led, HIGH);
    myservo.write(45);
    delay(1000);
    digitalWrite(led, LOW);
  }
  else if(button3State == LOW) {
    digitalWrite(led, HIGH);
    myservo.write(135);
    delay(1000);
    digitalWrite(led, LOW);
  }
  else if(button4State == LOW) {
    digitalWrite(led, HIGH);
    myservo.write(180);
    delay(1000);
    digitalWrite(led, LOW);
  }

}