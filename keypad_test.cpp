#include <Key.h>
#include <Keypad.h>

// ch1 = 1s
// ch2 = 5s
// ch3 = 10s
// ch4 = 15s

#define LIN1 2
#define LIN2 3
#define COL1 4
#define COL2 5

const byte ROWS = 2; // two rows
const byte COLS = 2; // two columns
char keys[ROWS][COLS] = {
  {'1','2'},
  {'3','4'}
};
byte rowPins[ROWS] = {LIN1, LIN2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {COL1, COL2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
/*
/* @file HelloKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates the simplest use of the matrix Keypad library.
|| #
*/
#define LIN1 2
#define LIN2 3
#define COL1 4
#define COL2 5

#include <Keypad.h>

const byte ROWS = 2; // two rows
const byte COLS = 2; // two columns
char keys[ROWS][COLS] = {
  {'1','2'},
  {'3','4'}
};
byte rowPins[ROWS] = {LIN1, LIN2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {COL1, COL2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char key = keypad.getKey();
  
  if (key){
    Serial.println(key);
  }
}*/
