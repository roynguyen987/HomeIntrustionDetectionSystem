#include "pitches.h"
int melody[] = {
 NOTE_D4, 0, NOTE_F4, NOTE_D4, 0, NOTE_D4,
 NOTE_G4, NOTE_D4, NOTE_C4, NOTE_D4, 0, NOTE_A4,
 NOTE_D4, 0, NOTE_D4, NOTE_AS4, NOTE_A4, NOTE_F4,
 NOTE_D4, NOTE_A4, NOTE_D5, NOTE_D4, NOTE_C4, 0,
 NOTE_C4, NOTE_A3, NOTE_E4, NOTE_D4, 0
};

int noteType[] = {
 8, 8, 6, 16, 16, 16,
 8, 8, 8, 8, 8, 6,
 16, 16, 16, 8, 8, 8,
 8, 8, 8, 16, 16, 16,
 16, 8, 8, 2, 2
};
char message;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(4,LOW);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly
  if(Serial.available()){
    message = Serial.read();
    Serial.println(message);
  }
  if(message == 'g'){
    digitalWrite(3, HIGH);
    digitalWrite(10, LOW);
    }
  else if(message == 'r'){
    digitalWrite(10, HIGH);
    digitalWrite(3, LOW);
  }
  else if(message == 'y'){
    digitalWrite(5, HIGH);
  }
  
}
