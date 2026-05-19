// C++ code
//
const int numLeds = 12;

int time = 100;

void setup() {
  for (int thisPin = 2; thisPin < 14; thisPin++) {
  	pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  for (int thisPin = 13; thisPin > 1; thisPin--) {
    digitalWrite(thisPin, HIGH);
    delay(time);
    digitalWrite(thisPin, LOW);
  }
  
  for (int thisPin = 2; thisPin < 14; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(time);
    digitalWrite(thisPin, LOW);
  }
}