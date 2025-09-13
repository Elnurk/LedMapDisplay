#include <Keypad.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

const byte ROWS = 4; //four rows
const byte COLS = 3; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {3, 8, 6, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {4, 2, 7}; //connect to the column pinouts of the keypad
String classroom;

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  switch(customKey){
    case '1':
      lcd.print('1');
      classroom = classroom + "1";
      break;
    case '2':
      lcd.print('2');
      classroom = classroom + "2";
      break;
    case '3':
      lcd.print('3');
      classroom = classroom + "3";
      break;
    case '4':
      lcd.print('4');
      classroom = classroom + "4";
      break;
    case '5':
      lcd.print('5');
      classroom = classroom + "5";
      break;
    case '6':
      lcd.print('6');
      classroom = classroom + "6";
      break;
    case '7':
      lcd.print('7');
      classroom = classroom + "7";
      break;
    case '8':
      lcd.print('8');
      classroom = classroom + "8";
      break;
    case '9':
      lcd.print('9');
      classroom = classroom + "9";
      break;
    case '*':
      lcd.clear();
      classroom = "";
      break;
    case '0':
      lcd.print('0');
      classroom = classroom + "0";
      break;
    case '#':
      lcd.clear();
      lcd.print(classroom);
      break;
  }
}

