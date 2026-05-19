// C++ code
//
int ledPins[] = {13, 2, 12, 3, 11, 4, 10, 5, 9, 6, 8, 7};
int numLeds = 12;
int time = 500;

void setup() {
  for (int i = 0; i < numLeds; i++) {
  	pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLeds; i += 2) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[i+1], HIGH);
    delay(time);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[i+1], LOW);
  }
  
  for (int i = numLeds - 2; i >= 0; i -= 2) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[i+1], HIGH);
    delay(time);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[i+1], LOW);
  }
}