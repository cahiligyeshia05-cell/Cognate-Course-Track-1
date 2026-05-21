int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8};

int decButton = 9;
int incButton = 10;

int number = 0;

int digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1}
};

void setup() {
  for (int i=0; i<7; i++) pinMode(segmentPins[i], OUTPUT);
  
  pinMode(decButton, INPUT);
  pinMode(incButton, INPUT);
  
  displayNumber(0);
}

void displayNumber(int num) {
  for (int i=0; i<7; i++) {
    digitalWrite(segmentPins[i], !digits[num][i]);
  }
}

void loop() {
  if(digitalRead(incButton)==HIGH) {
    if(number<9) number++;
    displayNumber(number);
    while(digitalRead(incButton)==HIGH);
    delay(200);
  }
  
  if(digitalRead(decButton)==HIGH) {
    if(number>0) number--;
    displayNumber(number);
    while(digitalRead(decButton)==HIGH);
    delay(200);
  }
}