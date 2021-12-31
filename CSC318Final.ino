// Jonathon Sherwood and Benjamin Branch
// Software Engineering Principles
// CSC318
// Final Project: Text Adventure Puzzle Box

//Include Arduino library for servos.
#include <Servo.h>

// Define pitches/pwm used to create notes.
#define NOTE_C2  65
#define NOTE_E2  82
#define NOTE_G2  98
#define NOTE_A2  110
#define NOTE_E3  165
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_E4  330
#define NOTE_G4  392
#define NOTE_G5  784


//Create new Servo instance
Servo myservo;

//Servo position and input variables
int pos = 0;
int input;

//Setup Function for Arduino
void setup()
{
  Serial.begin(9600); //Broadcast on serial port at a baud rate of 9600
  myservo.attach(9); //Assign GPIO pin 9 to servo instance.
  delay(2000); // Delay
  // Servo loop to beginning position
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);            
    delay(15);                     
  }
  // Call intro
  Intro();
}


// Main loop
void loop() {
  //Check if Serial has started
  if (Serial.available() > 0) {
    //Read serial input
    input = Serial.read();
    // Switch Statement for first puzzle
    switch (input) {
      case '1':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;

      case '2':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;

      case '3':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;

      case '4':
        delay(100);
        // Calls next puzzle
        PuzzleTwo();
        break;

      default:
        break;
    }
  }
}

//Puzzle function
int PuzzleTwo() {
  Serial.println("Password Hint: America's Birthday.");
  Serial.println("1)2020 2)1853 3)1776 4)Give Up");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '2':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '3':
        delay(100);
        // Calls next puzzle
        PuzzleThree();
        break;
      case '4':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      default:
        PuzzleTwo();
        break;
    }
  }
}

//Puzzle function
int PuzzleThree() {
  Serial.println("Password 1 Acknowledged. Password 2 Hint: The Facility This Box Was Crafted In");
  Serial.println("1)ASU 2)UAT 3)ABC 4)WALMART");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '2':
        delay(100);
        // Calls next puzzle
        PuzzleFour();
        break;
      case '3':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '4':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      default:
        PuzzleThree();
        break;
    }
  }
}

//Puzzle function
int PuzzleFour() {
  Serial.println("Password 2 Acknowledged. Password 3 Hint: What has a tail and a head but no legs?");
  Serial.println("1)Coin 2)Lizard 3)Oranges 4)Nobody knows");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        delay(100);
        // Calls next puzzle
        PuzzleFive();
        break;
      case '2':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '3':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '4':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      default:
        PuzzleFour();
        break;
    }
  }
}

//Puzzle function
int PuzzleFive() {
  Serial.println("Password 3 Acknowledged. Password 4 Hint: The First 4 Prime Numbers");
  Serial.println("1)2468 2)1234 3)PrimeTime 4)2357");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '2':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '3':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '4':
        delay(100);
        // Calls next puzzle
        PuzzleSix();
        break;
      default:
        PuzzleFive();
        break;
    }
  }
}

//Puzzle function
int PuzzleSix() {
  Serial.println("Password 4 Acknowledged. Password 5 Hint: How many hours are on a clock?");
  Serial.println("1)13 2)12 3)21 4)2");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '2':
        delay(100);
        // Calls next puzzle
        PuzzleSeven();
        break;
      case '3':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '4':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      default:
        PuzzleSix();
        break;
    }
  }
}

//Puzzle function
int PuzzleSeven() {
  Serial.println("Password 5 Acknowledged. Password 6 Hint: What is the square root of 144?");
  Serial.println("1)288 2)11 3)143 4)12");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '2':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '3':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '4':
        delay(100);
        // Calls next puzzle
        PuzzleEight();
        break;
      default:
        PuzzleSeven();
        break;
    }
  }
}

//Puzzle function
int PuzzleEight() {
  Serial.println("Password 6 Acknowledged. Password 7 Hint: How Many Feet are In A Mile?");
  Serial.println("1)5280 2)3 3)67 4)40000");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        delay(100);
        // Calls next puzzle
        PuzzleNine();
        break;
      case '2':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '3':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '4':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      default:
        PuzzleEight();
        break;
    }
  }
}

//Puzzle function
int PuzzleNine() {
  Serial.println("Password 7 Acknowledged. Password 8 Hint: What is the mathematical order of operations?");
  Serial.println("1)E=MC 2)PEMDAS 3)Y2K 4)USA");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '2':
        delay(100);
        // Calls next puzzle
        PuzzleTen();
        break;
      case '3':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '4':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      default:
        PuzzleNine();
        break;
    }
  }
}

//Puzzle function
int PuzzleTen() {
  Serial.println("Password 8 Acknowledged. FINAL PASSWORD Hint: How Many Days are in a LEAP YEAR");
  Serial.println("1)365 2)364 3)366 4)0");
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {
    input = Serial.read();
    switch (input) {
      case '1':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '2':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      case '3':
        delay(100);
        Serial.println("VICTORY");
        // Calls win condition
        Winar();
        break;
      case '4':
        Serial.println("ACCESS RESTRICTED. SHUTTING DOWN.");
        // Calls lose condition
        Losar();
        break;
      default:
        PuzzleTen();
        break;
    }
  }
}

// Intro function
int Intro() {
  Serial.println("Welcome to the SB3000 LockBox Containment Protocol");
  Serial.println("Attempting Access: 1) Open Box 2) Purge Data 3) Do Nothing 4) Input Password");
  //Play music
  int melody[] = {
    NOTE_E4, NOTE_E4, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A2, 0
  };

  // Durations by note type
  int noteDurations[] = {
    4, 8, 8, 4, 4, 4, 4, 4
  };
  
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    // Note duration code 
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(11, melody[thisNote], noteDuration);
    // Minimum time between notes to make notes sound natural
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // Stop tone
    noTone(11);
  }
}
// Lose condition function
int Losar() {
  //Play music
  int melody[] = {
    NOTE_E2, 0, NOTE_C2, 0, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2
  };
  // Durations by note type
  int noteDurations[] = {
    8, 4, 8, 4, 16, 16, 16, 16
  };
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    //note duration code
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(11, melody[thisNote], noteDuration);
    // Minimum time between notes to make notes sound natural
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // Stop Tone
    noTone(11);
  }
}
// Win condition function
int Winar() {
  int melody[] = {
    NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E3, NOTE_G4, NOTE_G5, NOTE_G5, NOTE_G5
  };
  //note duration code
  int noteDurations[] = {
    4, 8, 4, 4, 8, 4, 4, 4
  };
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    // Note duration code
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(11, melody[thisNote], noteDuration);
     // Minimum time between notes to make notes sound natural
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // Stop tone
    noTone(11);
  }
  // Servo to open position
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
