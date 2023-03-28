#include <Keypad.h>

int motor1pin1=6;
int motor1pin2=7;
int motor2pin1=A4;
int motor2pin2=A5;
const byte ROWS = 4; // Define the number of rows on the keypad
const byte COLS = 3; // Define the number of columns on the keypad
char keys[ROWS][COLS] = { // Matrix defining character to return for each key
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {12, 10, 9, 8}; 
byte colPins[COLS] = {5, 4, 3}; 
//initialize an instance of class
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

char invalid_keys[]={'0','5', '6','7','8','9','#','*'};
int invalid = 0; 

void setup(){
  Serial.begin(9600);
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
}

void loop(){
  char key = keypad.getKey();
  if (key){     // If key is pressed, send it to the Serial Monitor Window
    Serial.println(key);
    if (key == '1')
    {
      Serial.println(key);
      digitalWrite(motor1pin1, HIGH);
      digitalWrite(motor1pin2, LOW);
      delay(5000); 
      digitalWrite(motor1pin1, LOW);
      digitalWrite(motor1pin2, LOW);
      delay(1000);
      digitalWrite(motor2pin1, HIGH);
      digitalWrite(motor2pin2, LOW);
      delay(10000);
      digitalWrite(motor2pin1, LOW);
      digitalWrite(motor2pin2, HIGH);
      delay(5000);
      digitalWrite(motor1pin1, LOW);
      digitalWrite(motor1pin2, HIGH);
      delay(5000); 
      digitalWrite(motor1pin1, LOW);
      digitalWrite(motor1pin2, LOW);
    }
    if (key == '2')
    {
      Serial.println(key);
    }
      if (key == '3')
      {
        Serial.println(key);
      }
      if (key == '4')
      {
        Serial.println(key);
      }

      for (int i = 0; i < 8; i++) {
        if (key == invalid_keys[i]){
          invalid = 1;
        }
      }
      if (invalid){
        Serial.println("Error");
      }
  }
}
