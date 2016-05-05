#define EMITTER 2
#define RECEIVER A0
#define THRESHOLD 100
#define BUZZER 13
void setup() {
  // put your setup code here, to run once:
  // SETUP IR
  pinMode(EMITTER, OUTPUT);
  pinMode(RECEIVER, INPUT);
  // SETUP Buzzer
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int receiverValue = analogRead(RECEIVER);
  
  if( receiverValue < THRESHOLD ){
    digitalWrite(BUZZER, HIGH);
  }else{
    digitalWrite(BUZZER, LOW);
  }
}
