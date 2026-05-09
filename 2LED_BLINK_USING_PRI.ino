 #define pir 8
#define led1 5
#define led2 4

void setup() {
  Serial.begin(9600);

  pinMode(pir, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {

  bool x = digitalRead(pir);

  if (x == 1) {

    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);

  }
  else {

    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);

  }

  Serial.print("Motion Status: ");
  Serial.println(x);
}