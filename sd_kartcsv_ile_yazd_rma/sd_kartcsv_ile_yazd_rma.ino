/*
 *  Arduino SD Card Tutorial Example
 *  
 *  by Dejan Nedelkovski, www.HowToMechatronics.com
 */

#include <SD.h>
#include <SPI.h>

File myFile;

int pinCS = 10; // Pin 10 on Arduino Uno

void setup() {
    
  Serial.begin(9600);
  pinMode(pinCS, OUTPUT);
  
  // SD Card Initialization
  if (SD.begin())
  {
    Serial.println("SD card is ready to use.");
  } else
  {
    Serial.println("SD card initialization failed");
    return;
  }
  
  // Create/Open file 
  myFile = SD.open("test.csv", FILE_WRITE);
  
  // if the file opened okay, write to it:
  if (myFile) {
    Serial.println("Writing to file...");
    // Write to file
    myFile.println("time","ax","ay","az");
    myFile.close(); // close the file
    Serial.println("Done.");
  }
  // if the file didn't open, print an error:
  else {
    Serial.println("error opening test.csv");
  }

  // Reading the file
  myFile = SD.open("test.csv");
  if (myFile) {
    Serial.println("Read:");
    // Reading the whole file
    while (myFile.available()) {
      Serial.write(myFile.read());
   }
    myFile.close();
  }
  else {
    Serial.println("error opening test.csv");
  }
  
}
void loop() {
Serial.println("Şimdi alt alta yazmam lazım");
    // Write to file
    myFile.println("ax"+","+"ay"+","+"az");
    myFile.close(); // close the file
    Serial.println("Done.");}
