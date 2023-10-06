#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <DabbleESP32.h>

#define m1enA 15
#define m1in1 2
#define m1in2 4

#define m2in3 16
#define m2in4 17
#define m2enB 5

#define m3enA 25
#define m3in1 27
#define m3in2 26

#define m4in3 14
#define m4in4 12
#define m4enB 13

//int val = 0;
void setup() {

  Dabble.begin("Formula");

  pinMode(m1enA, OUTPUT);
  pinMode(m1in1, OUTPUT);
  pinMode(m1in2, OUTPUT);
  
  pinMode(m2enB, OUTPUT);
  pinMode(m2in3, OUTPUT);
  pinMode(m2in4, OUTPUT);
  
  pinMode(m3enA, OUTPUT);
  pinMode(m3in1, OUTPUT);
  pinMode(m3in2, OUTPUT);
  
  pinMode(m4in3, OUTPUT);
  pinMode(m4in4, OUTPUT);
  pinMode(m4enB, OUTPUT);

  //Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  //val = hallRead();
  //Serial.println(val);
  //delay(1000);


  digitalWrite(m1enA, HIGH);
  digitalWrite(m2enB, HIGH);
  digitalWrite(m3enA, HIGH);
  digitalWrite(m4enB, HIGH);
  Dabble.processInput();
  if (GamePad.isUpPressed())
          {
            Serial.print("UP");
            forward();
          }

        else if (GamePad.isDownPressed())
          {
             Serial.print("DOWN");
             backward();
          }

       else  if (GamePad.isLeftPressed())
           {
              Serial.print("Left");
              left();
           }

       else  if (GamePad.isRightPressed())
           {
               Serial.print("Right");
               right();
           }
       else if (GamePad.isTrianglePressed())
           {
              rotateLeft();
            }
        else if (GamePad.isCrossPressed())
           {
              rotateRight();
            }
        else if (GamePad.isSquarePressed())
        {
          upperleft();
        }
        else if (GamePad.isCirclePressed())
        {
          upperright();
        }
           else 
           {
            Serial.println("strop");
            Stop();
           }

}

void forward()
     {
        digitalWrite(m1in1,HIGH);
        digitalWrite(m1in2,LOW);
        
        digitalWrite(m2in3,HIGH);
        digitalWrite(m2in4,LOW);
        
        digitalWrite(m3in1,HIGH);
        digitalWrite(m3in2,LOW);
        
        digitalWrite(m4in3,HIGH);
        digitalWrite(m4in4,LOW);
      
     }
     void backward()
     {
        digitalWrite(m1in1,LOW);
        digitalWrite(m1in2,HIGH);
        
        digitalWrite(m2in3,LOW);
        digitalWrite(m2in4,HIGH);
        
        digitalWrite(m3in1,LOW);
        digitalWrite(m3in2,HIGH);
        
        digitalWrite(m4in3,LOW);
        digitalWrite(m4in4,HIGH);
      
     }
     void left()
     {
        digitalWrite(m1in1,HIGH);
        digitalWrite(m1in2,LOW);
        
        digitalWrite(m2in3,HIGH);
        digitalWrite(m2in4,LOW);
        
        digitalWrite(m3in1,LOW);
        digitalWrite(m3in2,LOW);
        
        digitalWrite(m4in3,LOW);
        digitalWrite(m4in4,LOW);
      
     }
     void right()
     {
        digitalWrite(m1in1,LOW);
        digitalWrite(m1in2,LOW);
        
        digitalWrite(m2in3,LOW);
        digitalWrite(m2in4,LOW);
        
        digitalWrite(m3in1,HIGH);
        digitalWrite(m3in2,LOW);
        
        digitalWrite(m4in3,HIGH);
        digitalWrite(m4in4,LOW);
      
     }
     void rotateLeft(){
        digitalWrite(m1in1,HIGH);
        digitalWrite(m1in2,LOW);
        
        digitalWrite(m2in3,HIGH);
        digitalWrite(m2in4,LOW);
        
        digitalWrite(m3in1,LOW);
        digitalWrite(m3in2,HIGH);
        
        digitalWrite(m4in3,LOW);
        digitalWrite(m4in4,HIGH);
     }
     void rotateRight(){
        digitalWrite(m1in1,LOW);
        digitalWrite(m1in2,HIGH);
        
        digitalWrite(m2in3,LOW);
        digitalWrite(m2in4,HIGH);
        
        digitalWrite(m3in1,HIGH);
        digitalWrite(m3in2,LOW);
        
        digitalWrite(m4in3,HIGH);
        digitalWrite(m4in4,LOW);
     }
     void upperleft(){
        digitalWrite(m1in1,LOW);
        digitalWrite(m1in2,LOW);
        
        digitalWrite(m2in3,HIGH);
        digitalWrite(m2in4,LOW);
        
        digitalWrite(m3in1,HIGH);
        digitalWrite(m3in2,LOW);
        
        digitalWrite(m4in3,LOW);
        digitalWrite(m4in4,LOW);
     }
     void upperright(){
        digitalWrite(m1in1,HIGH);
        digitalWrite(m1in2,LOW);
        
        digitalWrite(m2in3,LOW);
        digitalWrite(m2in4,LOW);
        
        digitalWrite(m3in1,LOW);
        digitalWrite(m3in2,LOW);
        
        digitalWrite(m4in3,HIGH);
        digitalWrite(m4in4,LOW);
     }
     void Stop()
     {
        digitalWrite(m1in1,LOW);
        digitalWrite(m1in2,LOW);
        
        digitalWrite(m2in3,LOW);
        digitalWrite(m2in4,LOW);
        
        digitalWrite(m3in1,LOW);
        digitalWrite(m3in2,LOW);
        
        digitalWrite(m4in3,LOW);
        digitalWrite(m4in4,LOW);
      
     }
