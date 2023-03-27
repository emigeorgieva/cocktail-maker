int motor1pin1=2;
int motor1pin2=3;
int motor1pin3=4;
int motor1pin4=5;
int Enpin1=9;

void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor1pin3, OUTPUT);
  pinMode(motor1pin4, OUTPUT);
  pinMode(Enpin1, OUTPUT);
 }

void loop() {
  //motor a
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  delay(5000); 
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  //motor b
  digitalWrite(motor1pin3, LOW);
  digitalWrite(motor1pin4, HIGH);
  delay(200);
  digitalWrite(motor1pin3, HIGH);
  digitalWrite(motor1pin4, LOW);
  
  //motor b
  //digitalWrite(motor1pin3, LOW);
  //digitalWrite(motor1pin4, LOW);
  delay(2000);

  //motor 

 

}
