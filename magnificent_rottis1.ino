int button1 = 2; 
int button2 = 3; 
int button3 = 4; 

int led1 = 8; 
int led2 = 9; 
int led3 = 10; 

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {
  if (digitalRead(button1) == LOW) {
    digitalWrite(led1, HIGH); 
  } else {
    digitalWrite(led1, LOW); 
  }

  if (digitalRead(button2) == LOW) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

  if (digitalRead(button3) == LOW) {
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led3, LOW);
  }
}
