#include <Servo.h>

Servo myservo;  // create servo object to control a servo
               

int pos = 0;    // variable to store the servo position
int TempoGravacao =50000;
int buttonState = 0; //Initial state of button when not pressed is 0

void setup()
{
  myservo01.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo02.attach(10);
  
}


void loop()
{
  
    myservo01.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position

  myservo02.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
   

  val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180)
  myservo01.write(val);                  // sets the servo position according to the scaled value
  
  val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180)
  myservo01.write(val);                  // sets the servo position according to the scaled value
                            
  // Falta desenvolver a conta que transforma o tempo total em intervalos de movimentos na escala de 0 a 180 graus
  
}

//  Inspirado nos sites:   http://www.instructables.com/id/Pan-Tilt-Servo-bracket-controlled-by-Arduino/?ALLSTEPS
//                         http://www.instructables.com/id/very-basic-pan-tilt-using-arduino/?ALLSTEPS
