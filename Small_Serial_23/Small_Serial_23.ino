#include <HID-Project.h>
#include <HID-Settings.h>

#include "HID-Project.h"
#include "HID.h"

const byte numChars = 30;
char receivedChars[numChars];
char tempChars[numChars];

//variables to hold data
char bigMess[numChars] = {0};
int joyX = 0;
float joyY = 0.0;


int joyXReal = 0;
float joyYReal = 0.0;



boolean newData = false;


void setup() {

//begins reading in from big chip serial bus
  Serial1.begin(115200);
//begins writing to serial
  Serial.begin(115200);
//start the gamepad
  Gamepad.begin();    
  

}

void loop() {



   recvWithStartEndMarkers();
    if (newData == true) {
    strcpy (tempChars, receivedChars);
    parseData();
    showParsedData(); //used for troubleshooting only
    gameControl();
    newData = false;

      }
     
}      





      
//this function handles reading in all the values from big guy  
void recvWithStartEndMarkers() {
  static boolean recvInProgress = false;
  static byte ndx = 0;
  char startMarker = '<';
  char endMarker = '>';
  char rc;

    while (Serial1.available() > 0 && newData == false) {
    rc = Serial1.read();

    if (recvInProgress == true) {
      if (rc != endMarker) {
        receivedChars[ndx] = rc;
        ndx++;
        if (ndx >= numChars) {
          ndx = numChars - 1;
        }
      }
      else {
        receivedChars[ndx] = '\0'; // terminate the string
        recvInProgress = false;
        ndx = 0;
        newData = true;
      }
    }

    else if (rc == startMarker) {
      recvInProgress = true;
    }
  }
}


//this function takes the values from big guy and seperates them into characters and ints
void parseData() {

  
   char * strtokIndx; // this is used by strtok() as an index

   strtokIndx = strtok(tempChars,",");      // get the first part - the string
   strcpy(bigMess,strtokIndx); // copy it to bigMess
    
    strtokIndx = strtok(NULL, ","); // this continues where the previous call left off
    joyX = atoi(strtokIndx);     // convert this part to an integer
//    if (joyX < 0 || joyX > 1023){
//      joyX = 512;
//    }
    strtokIndx = strtok(NULL, ","); // this continues where the previous call left off
    joyY = atof(strtokIndx);     // convert this part to an integer
//    if (joyY <0.0 || joyY > 1023.0){
//      joyY = 512.0;
//    }
}

//used as a test to show that the data is actually being broken up properly
void showParsedData() {
    Serial.print("Message ");
    Serial.println(bigMess);    
    Serial.print("joyX ");
    Serial.println(joyX);
    Serial.print("joyY ");
    Serial.println(joyY);
    
}



//this functions writes all the values taken in to the actual gamepad
void gameControl() {
//maps the joystick values to be read by the gamepad

  joyXReal = map(joyX, 0, 1023, 32767, -32767);

  joyYReal = map(joyY, 0.0, 1023.0, 32767.0, -32767.0);

 
    
  //Serial.println(joyXReal);
  //Serial.println(joyYReal);
  Gamepad.xAxis(joyXReal);
  Gamepad.yAxis(joyYReal);
  
//handles all of the characters being passed in 
  char c = bigMess[0];
  if(c >= 'a' && c < 'b') {
  Gamepad.press(1);
  }
  if (c >= 'b' && c < 'c') {
  Gamepad.release(1);
  }  

  c = bigMess[1];
  if(c >= 'c' && c < 'd') {
  Gamepad.press(2);
  }
  if (c >= 'd' && c < 'e') {
  Gamepad.release(2);
  }    

  c = bigMess[2];
  if(c >= 'e' && c < 'f') {
  Gamepad.press(3);
  }
  if (c >= 'f' && c < 'g') {
  Gamepad.release(3);
  }    

    c = bigMess[3];
  if(c >= 'g' && c < 'h') {
  Gamepad.press(4);
  }
  if (c >= 'h' && c < 'i') {
  Gamepad.release(4);
  }    

    c = bigMess[4];
  if(c >= 'i' && c < 'j') {
  Gamepad.press(5);
  }
  if (c >= 'j' && c < 'k') {
  Gamepad.release(5);
  }    

    c = bigMess[5];
  if(c >= 'k' && c < 'l') {
  Gamepad.press(6);
  }
  if (c >= 'l' && c < 'm') {
  Gamepad.release(6);
  }    

    c = bigMess[6];
  if(c >= 'm' && c < 'n') {
  Gamepad.press(7);
  }
  if (c >= 'n' && c < 'o') {
  Gamepad.release(7);
  }    

    c = bigMess[7];
  if(c >= 'o' && c < 'p') {
  Gamepad.press(8);
  }
  if (c >= 'p' && c < 'q') {
  Gamepad.release(8);
  }    

    c = bigMess[8];
  if(c >= 'q' && c < 'r') {
  Gamepad.press(9);
  }
  if (c >= 'r' && c < 's') {
  Gamepad.release(9);
  }    

    c = bigMess[9];
  if(c >= 's' && c < 't') {
  Gamepad.press(10);
  }
  if (c >= 't' && c < 'u') {
  Gamepad.release(10);
  }  

    c = bigMess[10];
  if(c >= 'u' && c < 'v') {
  Gamepad.press(11);
  }
  if (c >= 'v' && c < 'w') {
  Gamepad.release(11);
  }    

    c = bigMess[11];
  if(c >= 'w' && c < 'x') {
  Gamepad.press(12);
  }
  if (c >= 'x' && c < 'y') {
  Gamepad.release(12);
  }    

    c = bigMess[12];
  if(c >= 'y' && c < 'z') {
  Gamepad.press(13);
  }
  if (c >= 'z' && c < '{') {
  Gamepad.release(13);
  }    

    c = bigMess[13];
  if(c >= 'A' && c < 'B') {
  Gamepad.press(14);
  }
  if (c >= 'B' && c < 'C') {
  Gamepad.release(14);
  }
        
    c = bigMess[14];
  if(c >= 'C' && c < 'D') {
  Gamepad.press(15);
  }
  if (c >= 'D' && c < 'E') {
  Gamepad.release(15);
  }   
     
    c = bigMess[15];
  if(c >= 'E' && c < 'F') {
  Gamepad.press(16);
  }
  if (c >= 'F' && c < 'G') {
  Gamepad.release(16);
  }      

    c = bigMess[16];
  if(c >= 'G' && c < 'H') {
  Gamepad.press(17);
  }
  if (c >= 'H' && c < 'I') {
  Gamepad.release(17);
  }   

    c = bigMess[17];
  if(c >= 'I' && c < 'J') {
  Gamepad.press(18);
  }
  if (c >= 'J' && c < 'K') {
  Gamepad.release(18);
  }   
  
      c = bigMess[18];
  if(c >= 'K' && c < 'L') {
  Gamepad.press(19);
  }
  if (c >= 'L' && c < 'M') {
  Gamepad.release(19);
  }   
  
      c = bigMess[19];
  if(c >= 'M' && c < 'N') {
  Gamepad.press(20);
  }
  if (c >= 'N' && c < 'O') {
  Gamepad.release(20);
  }   

      c = bigMess[20];
  if(c >= 'O' && c < 'P') {
  Gamepad.press(21);
  }
  if (c >= 'P' && c < 'Q') {
  Gamepad.release(21);
  }   

 
//writes all values to the gamepad    
    Gamepad.write();
  }
