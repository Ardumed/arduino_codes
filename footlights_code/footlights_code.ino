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
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }
  delay(100);
}
