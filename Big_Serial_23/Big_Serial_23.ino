//create all the button mappings
const int buttonOne = 0;
const int buttonTwo = 2;
const int buttonThree = 4;
const int buttonFour = 6;
const int buttonFive = 8;
const int buttonSix = 10;
const int buttonSeven = 12;
const int buttonEight = 14;
const int buttonNine = 16;
const int buttonTen = 18;
const int buttonEleven = 20;
const int buttonTwelve = 22;
const int buttonThirteen = 24;
const int buttonFourteen = 26;
const int buttonFifteen = 28;
const int buttonSixteen = 30;
const int buttonSeventeen = 32;
const int buttonEighteen = 34;
const int buttonNineteen = 36;
const int buttonTwenty = 37;
const int buttonTwentyOne = 38;


//create all the led mappings
const int ledOne = 1;
const int ledTwo = 3;
const int ledThree = 5;
const int ledFour = 7;
const int ledFive = 9;
const int ledSix = 11;
const int ledSeven = 13;
const int ledEight = 15;
const int ledNine = 17;
const int ledTen = 19;
const int ledEleven = 21;
const int ledTwelve = 23;
const int ledThirteen = 25;
const int ledFourteen = 27;
const int ledFifteen = 29;
const int ledSixteen = 31;
const int ledSeventeen = 33;
const int ledEighteen = 35;
//create all the joystick mappings
const int joyOne = A0;
const int joyTwo = A1;
int joyOneValue = 0;
float joyTwoValue = 0.0;
int joyOneOutput = 0;
float joyTwoOutput = 0.0;

void setup() {
//declare inputs for buttons
pinMode(buttonOne, INPUT_PULLUP);
pinMode(buttonTwo, INPUT_PULLUP);
pinMode(buttonThree, INPUT_PULLUP);
pinMode(buttonFour, INPUT_PULLUP);
pinMode(buttonFive, INPUT_PULLUP);
pinMode(buttonSix, INPUT_PULLUP);
pinMode(buttonSeven, INPUT_PULLUP);
pinMode(buttonEight, INPUT_PULLUP);
pinMode(buttonNine, INPUT_PULLUP);
pinMode(buttonTen, INPUT_PULLUP);
pinMode(buttonEleven, INPUT_PULLUP);
pinMode(buttonTwelve, INPUT_PULLUP);
pinMode(buttonThirteen, INPUT_PULLUP);
pinMode(buttonFourteen, INPUT_PULLUP);
pinMode(buttonFifteen, INPUT_PULLUP);
pinMode(buttonSixteen, INPUT_PULLUP);
pinMode(buttonSeventeen, INPUT_PULLUP);
pinMode(buttonEighteen, INPUT_PULLUP);
pinMode(buttonNineteen, INPUT_PULLUP);
pinMode(buttonTwenty, INPUT_PULLUP);
pinMode(buttonTwentyOne, INPUT_PULLUP);
//declare outputs for buttons
pinMode(ledOne, OUTPUT);
pinMode(ledTwo, OUTPUT);
pinMode(ledThree, OUTPUT);
pinMode(ledFour, OUTPUT);
pinMode(ledFive, OUTPUT);
pinMode(ledSix, OUTPUT);
pinMode(ledSeven, OUTPUT);
pinMode(ledEight, OUTPUT);
pinMode(ledNine, OUTPUT);
pinMode(ledTen, OUTPUT);
pinMode(ledEleven, OUTPUT);
pinMode(ledTwelve, OUTPUT);
pinMode(ledThirteen, OUTPUT);
pinMode(ledFourteen, OUTPUT);
pinMode(ledFifteen, OUTPUT);
pinMode(ledSixteen, OUTPUT);
pinMode(ledSeventeen, OUTPUT);
pinMode(ledEighteen, OUTPUT);


//start serial bus
Serial.begin(115200);
}

void loop() {

//handle analog input and map it to smaller value
  joyOneValue = analogRead(joyOne);
  if (joyOneValue >=425 && joyOneValue <= 575){
    joyOneValue = 511;
  }
  
  //joyOneOutput = map(joyOneValue, 0, 1023, -99, 99);

  joyTwoValue = analogRead(joyTwo);
  if (joyTwoValue >=425.0 && joyTwoValue <= 575.0){
  joyTwoValue = 511.0;
  }
  //joyTwoOutput = map(joyTwoValue, 0, 1023, -99, 99);

//starting character of serial command
  Serial.write('<');
//handle button inputs
  if (!digitalRead(buttonOne)) {
    Serial.write('a');
    digitalWrite(ledOne, HIGH);
  }
  else{
    Serial.write('b');
    digitalWrite(ledOne, LOW);
    }
  if (!digitalRead(buttonTwo)) {
    Serial.write('c');
    digitalWrite(ledTwo, HIGH);
  }
  else{
    Serial.write('d');
    digitalWrite(ledTwo, LOW);
    }
    if (!digitalRead(buttonThree)) {
    Serial.write('e');
    digitalWrite(ledThree, HIGH);
  }
  else{
    Serial.write('f');
    digitalWrite(ledThree, LOW);
    }
      if (!digitalRead(buttonFour)) {
    Serial.write('g');
    digitalWrite(ledFour, HIGH);
  }
  else{
    Serial.write('h');
    digitalWrite(ledFour, LOW);
    }
      if (!digitalRead(buttonFive)) {
    Serial.write('i');
    digitalWrite(ledFive, HIGH);
  }
  else{
    Serial.write('j');
    digitalWrite(ledFive, LOW);
    }
      if (!digitalRead(buttonSix)) {
    Serial.write('k');
    digitalWrite(ledSix, HIGH);
  }
  else{
    Serial.write('l');
    digitalWrite(ledSix, LOW);
    }
      if (!digitalRead(buttonSeven)) {
    Serial.write('m');
    digitalWrite(ledSeven, HIGH);
  }
  else{
    Serial.write('n');
    digitalWrite(ledSeven, LOW);
    }
      if (!digitalRead(buttonEight)) {
    Serial.write('o');
    digitalWrite(ledEight, HIGH);
  }
  else{
    Serial.write('p');
    digitalWrite(ledEight, LOW);
    }
      if (!digitalRead(buttonNine)) {
    Serial.write('q');
    digitalWrite(ledNine, HIGH);
  }
  else{
    Serial.write('r');
    digitalWrite(ledNine, LOW);
    }
      if (!digitalRead(buttonTen)) {
    Serial.write('s');
    digitalWrite(ledTen, HIGH);
  }
  else{
    Serial.write('t');
    digitalWrite(ledTen, LOW);
    }
      if (!digitalRead(buttonEleven)) {
    Serial.write('u');
    digitalWrite(ledEleven, HIGH);
  }
  else{
    Serial.write('v');
    digitalWrite(ledEleven, LOW);
    }
      if (!digitalRead(buttonTwelve)) {
    Serial.write('w');
    digitalWrite(ledTwelve, HIGH);
  }
  else{
    Serial.write('x');
    digitalWrite(ledTwelve, LOW);
    }    
      if (!digitalRead(buttonThirteen)) {
    Serial.write('y');
    digitalWrite(ledThirteen, HIGH);
  }
  else{
    Serial.write('z');
    digitalWrite(ledThirteen, LOW);
    }  
      if (!digitalRead(buttonFourteen)) {
    Serial.write('A');
    digitalWrite(ledFourteen, HIGH);
  }
  else{
    Serial.write('B');
    digitalWrite(ledFourteen, LOW);
    }    
  if (!digitalRead(buttonFifteen)) {
    Serial.write('C');
    digitalWrite(ledFifteen, HIGH);
  }
  else{
    Serial.write('D');
    digitalWrite(ledFifteen, LOW);
    }   
  if (!digitalRead(buttonSixteen)) {
    Serial.write('E');
    digitalWrite(ledSixteen, HIGH);
  }
  else{
    Serial.write('F');
    digitalWrite(ledSixteen, LOW);
    }     
  if (!digitalRead(buttonSeventeen)) {
    Serial.write('G');
    digitalWrite(ledSeventeen, HIGH);
  }
  else{
    Serial.write('H');
    digitalWrite(ledSeventeen, LOW);
    }    
 if (!digitalRead(buttonEighteen)) {
    Serial.write('I');
    digitalWrite(ledEighteen, HIGH);
  }
  else{
    Serial.write('J');
    digitalWrite(ledEighteen, LOW);
    }  
      if (!digitalRead(buttonNineteen)) {
    Serial.write('K');
  }
  else{
    Serial.write('L');
    }  
 if (!digitalRead(buttonTwenty)) {
    Serial.write('M');
  }
  else {
    Serial.write('N');
  }
 if (!digitalRead(buttonTwentyOne)) {
  Serial.write('O');
 }
 else {
  Serial.write('P');
 }
    
//switch from passing characters to passing ints
  Serial.write(',');

//handle analog X input from joystick
  Serial.print(joyOneValue);
  Serial.write(',');

//handle analog Y input from joystick  
  Serial.print(joyTwoValue);
//ending character of serial command
  Serial.write('>');
  delay(88);




}
