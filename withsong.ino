#include "SevSeg.h"
#include "Music_notes.h" 
SevSeg sevseg; 
int usernum; // The number the user wants to put (0-9) input 
const int buzzer = 10;
const int songspeed = 1.5;


void setup() {
   byte numDigits = 1;
    byte digitPins[] = {};
    byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9};
    bool resistorsOnSegments = true;
    byte hardwareConfig = COMMON_CATHODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(9);
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

 

void loop() {
  if(Serial.available() > 0){
  // put your main code here, to run repeatedly:
  //usernum = Serial.read()-48;
  usernum = Serial.parseInt();
  
    if (usernum == 0){
    Serial.println("0 is selected");
    sevseg.setNumber(0);
     sevseg.refreshDisplay(); 
      for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait = duration[i] * songspeed;
  tone(buzzer,notes[i],wait);          //tone(pin,frequency,duration)
  delay(wait);} 
  }
  if (usernum == 1){
    Serial.println("1 is selected");
    sevseg.setNumber(1);
     sevseg.refreshDisplay(); 
     for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait1 = duration1[i] * songspeed;
  tone(buzzer,notes1[i],wait1);          //tone(pin,frequency,duration)
  delay(wait1);}
  }

  
  if (usernum == 2){
    Serial.println("2 is selected");
    sevseg.setNumber(2);
     sevseg.refreshDisplay(); 
     for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait2 = duration2[i] * songspeed;
  tone(buzzer,notes2[i],wait2);          //tone(pin,frequency,duration)
  delay(wait2);}
  }
  
  if(usernum == 3){
    Serial.println("3 is selected");
    sevseg.setNumber(3);
     sevseg.refreshDisplay();
        for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait3 = duration3[i] * songspeed;
  tone(buzzer,notes3[i],wait3);          //tone(pin,frequency,duration)
  delay(wait3);}
  }
  if(usernum == 4){
    Serial.println("4 is selected");
    sevseg.setNumber(4);
     sevseg.refreshDisplay(); 
     for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait4 = duration4[i] * songspeed;
  tone(buzzer,notes4[i],wait4);          //tone(pin,frequency,duration)
  delay(wait4);}
  }
if(usernum == 5){
    Serial.println("5 is selected");
    sevseg.setNumber(5);
     sevseg.refreshDisplay(); 
     for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait5 = duration5[i] * songspeed;
  tone(buzzer,notes5[i],wait5);          //tone(pin,frequency,duration)
  delay(wait5);}
  }
if(usernum == 6){
    Serial.println("6 is selected");
    sevseg.setNumber(6);
     sevseg.refreshDisplay(); 
     for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait6 = duration6[i] * songspeed;
  tone(buzzer,notes6[i],wait6);          //tone(pin,frequency,duration)
  delay(wait6);}
  }
  if(usernum == 7){
    Serial.println("7 is selected");
    sevseg.setNumber(7);
     sevseg.refreshDisplay(); 
     for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait7 = duration7[i] * songspeed;
  tone(buzzer,notes7[i],wait7);          //tone(pin,frequency,duration)
  delay(wait7);}
  }
  if(usernum == 8){
    Serial.println("8 is selected");
    sevseg.setNumber(8);
     sevseg.refreshDisplay(); 
     for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
  int wait8 = duration8[i] * songspeed;
  tone(buzzer,notes8[i],wait8);          //tone(pin,frequency,duration)
  delay(wait8);}
  }
  if(usernum == 9){
    Serial.println("9 is selected");
    sevseg.setNumber(9);
     sevseg.refreshDisplay(); 
   //  for (int i=0;i<20;i++){              //20 is the total number of music notes in the song
//  int wait9 = duration9[i] * songspeed;
 // tone(buzzer,notes9[i],wait9);          //tone(pin,frequency,duration)
  //delay(wait9);}
  }
}  
}
 

