#define RED A2
#define GREEN A3
#define BUZZER A4
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(A1, HIGH);
  int x = analogRead(A0);
  Serial.println(x);
  if(x>=97){
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    digitalWrite(BUZZER, HIGH);
  }else{
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BUZZER, LOW);
  }
  delay(100);
}

