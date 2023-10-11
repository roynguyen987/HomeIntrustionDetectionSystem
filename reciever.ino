void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  char receiver;

  if (Serial.available()) {
    receiver = Serial.read();
    Serial.println(receiver);

    if (receiver == 'Y')
    {
     digitalWrite(7, HIGH); // switch LED On 
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
    } 
    if (receiver == 'R') 
    {
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW); 
    }
    if (receiver == 'G'){
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(7, LOW);
    }
  }

}
