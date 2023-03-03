//create all the button mappings
const int buttonOne = 1;
const int buttonTwo = 3;
const int buttonThree = 5;
const int buttonFour = 7;
const int buttonFive = 9;
const int buttonSix = 11;
const int buttonSeven = 13;
const int buttonEight = 15;
const int buttonNine = 17;
const int buttonTen = 19;
const int buttonEleven = 21;
const int buttonTwelve = 23;
const int buttonThirteen = 25;
const int buttonFourteen = 27;
const int buttonFifteen = 29;
const int buttonSixteen = 31;
const int buttonSeventeen = 33;
const int buttonEighteen = 35;
const int buttonNineteen = 37;
const int buttonTwenty = 39;
const int buttonTwentyOne = 40;
const int buttonTwentyTwo = 41;
const int buttonTwentyThree = 43;
const int buttonTwentyFour = 44;
const int buttonTwentyFive = 45;


//create all the led mappings
const int ledOne = 0;
const int ledTwo = 2;
const int ledThree = 4;
const int ledFour = 6;
const int ledFive = 8;
const int ledSix = 10;
const int ledSeven = 12;
const int ledEight = 14;
const int ledNine = 16;
const int ledTen = 18;
const int ledEleven = 20;
const int ledTwelve = 22;
const int ledThirteen = 24;
const int ledFourteen = 26;
const int ledFifteen = 28;
const int ledSixteen = 30;
const int ledSeventeen = 32;
const int ledEighteen = 34;
const int ledNineteen = 36;
const int ledTwenty = 38;
//const int ledTwentyOne = 40;
//create all the joystick mappings

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
pinMode(buttonTwentyTwo, INPUT_PULLUP);
pinMode(buttonTwentyThree, INPUT_PULLUP);
pinMode(buttonTwentyFour, INPUT_PULLUP);
pinMode(buttonTwentyFive, INPUT_PULLUP);
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
pinMode(ledNineteen, OUTPUT);
pinMode(ledTwenty, OUTPUT);
//pinMode(ledTwentyOne, OUTPUT);


//start serial bus
Serial.begin(115200);
}

void loop() {


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
    digitalWrite(ledNineteen, HIGH);
  }
  else{
    Serial.write('L');
    digitalWrite(ledNineteen, LOW);
    }  
 if (!digitalRead(buttonTwenty)) {
    Serial.write('M');
    digitalWrite(ledTwenty, HIGH);
  }
  else {
    Serial.write('N');
    digitalWrite(ledTwenty, LOW);
  }
 if (!digitalRead(buttonTwentyOne)) {
  Serial.write('O');
  //digitalWrite(ledTwentyOne, HIGH);
 }
 else {
  Serial.write('P');
 // digitalWrite(ledTwentyOne, LOW);
 }

   if (!digitalRead(buttonTwentyTwo)) {
  Serial.write('Q');
  //digitalWrite(ledTwentyOne, HIGH);
 }
 else {
  Serial.write('R');
 // digitalWrite(ledTwentyOne, LOW);
 }

    if (!digitalRead(buttonTwentyThree)) {
  Serial.write('S');
  //digitalWrite(ledTwentyOne, HIGH);
 }
 else {
  Serial.write('T');
 }
     if (!digitalRead(buttonTwentyFour)) {
  Serial.write('U');
 }
 else {
  Serial.write('V');
 }
     if (!digitalRead(buttonTwentyFive)) {
  Serial.write('W');
 }
 else {
  Serial.write('X');
 }
//switch from passing characters to passing ints
  Serial.write(',');

//handle analog X input from joystick
  //Serial.print(joyOneValue);
  Serial.write(',');

//handle analog Y input from joystick  
 // Serial.print(joyTwoValue);
//ending character of serial command
  Serial.write('>');
  delay(30);




}
