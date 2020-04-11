

/*
 *
*/

#define EN     8 // Enable end of stepper motor, active low
#define X_DIR  5 // X axis stepper motor direction control
#define Y_DIR  6 // Y axis stepper motor direction control
#define Z_DIR  7 // Z axis step motor direction control
#define X_STP  2 // X axis step comtrol
#define Y_STP  3 // X axis step comtrol
#define Z_STP  4 // X axis step comtrol




void step (boolean dir, byte dirPin, byte stepperPin, int steps)
{
  digitalWrite(dirPin, dir);
  delay(50);
  for (int i = 0; i < steps; i++) {
    digitalWrite(stepperPin, HIGH);
    delayMicroseconds(800);
    digitalWrite(stepperPin, LOW);
    delayMicroseconds(800);
    }
  }
void setup() { // Set the IO pins used by the stepper motor as outputs
  // put your setup code here, to run once:
 
  
  pinMode(X_DIR, OUTPUT); pinMode(X_STP, OUTPUT);
  pinMode(Y_DIR, OUTPUT); pinMode(Y_STP, OUTPUT);
  pinMode(Z_DIR, OUTPUT); pinMode(Z_STP, OUTPUT);
  pinMode (EN, OUTPUT);
  digitalWrite (EN, LOW);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  
  

 
  
  
  step(false, X_DIR, X_STP, 5850); // X axis motor reverses 1 turn, 200 steps is one turn
  step(false, X_DIR, X_STP, -5850); // X axis motor reverses 1 turn, 200 steps is one turn
  //delay (10000);
  //step(true, X_DIR, X_STP, 5850); // X axis motor forward 1 turn, 200 steps is one turn
  //delay (10000);
  //step(false, Y_DIR, Y_STP, 600); // Y axis motor reverses 1 turn, 200 steps is one turn
  //step(false, Z_DIR, Z_STP, 600); // Z axis motor reverses 1 turn, 200 steps is one turn
  //delay(1000);
  //step(true, Y_DIR, Y_STP, 600); // Y axis motor forward 1 turn, 200 steps is one turn
  //step(true, Z_DIR, Z_STP, 600); // Z axis motor forward 1 turn, 200 steps is one turn
  //delay(1000);


  
}
