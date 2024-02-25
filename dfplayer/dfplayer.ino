#include "DFRobotDFPlayerMini.h"

DFRobotDFPlayerMini player; // Create the Player object

void setup() {

  Serial.begin(9600); // Init USB serial port for debugging

  Serial2.begin(9600); // Init serial port for DFPlayer Mini

  // Start communication with DFPlayer Mini

  Serial.println("Connecting to DFplayer");

  while (!player.begin(Serial2))

  {

      Serial.print(".");

      delay(1000);

  }

  Serial.println(" DFplayer connected!");

  player.volume(20); // Set volume to maximum (0 to 30).

}



void loop() {

    player.play(1);

    delay(3000);

    player.play(2);

    delay(3000);

    player.play(3);

    delay(3000);

   }
