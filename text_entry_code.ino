// Ethan Wells
// Text Entry Device



#if defined(ARDUINO) 
SYSTEM_MODE(SEMI_AUTOMATIC); 
#endif

//Declare led as pin D7
int led2 = D7;

// Set buttons to digital pins
const int input_pin = D0;
const int button_1_pin = D16;
const int button_2_pin = D14;
const int button_3_pin = D12;
const int button_4_pin = D10;
const int button_5_pin = D6;
const int button_6_pin = D4;
const int button_7_pin = D2;
const int button_8_pin = D1;


// Initialize states
int button_1_state = 0;
int button_2_state = 0;
int button_3_state = 0;
int button_4_state = 0;
int button_5_state = 0;
int button_6_state = 0;
int button_7_state = 0;
int button_8_state = 0;
int input_state = 0;

// Declare counts
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
int count7 = 0;
int count8 = 0;


void setup() {

  // Set the led as output
  pinMode(led2, OUTPUT);

  // Open a serial connection with baud rate 9600
  Serial.begin(9600);
  
  // initialize the pins as input pullup
  pinMode(input_pin, INPUT_PULLUP);
  pinMode(button_1_pin, INPUT_PULLUP);
  pinMode(button_2_pin, INPUT_PULLUP);
  pinMode(button_3_pin, INPUT_PULLUP);
  pinMode(button_4_pin, INPUT_PULLUP);
  pinMode(button_5_pin, INPUT_PULLUP);
  pinMode(button_6_pin, INPUT_PULLUP);
  pinMode(button_7_pin, INPUT_PULLUP);
  pinMode(button_8_pin, INPUT_PULLUP);
}

// the loop to be continuously running
void loop() {

  // read all of the button states
  button_1_state = digitalRead(button_1_pin);
  button_2_state = digitalRead(button_2_pin);
  button_3_state = digitalRead(button_3_pin);
  button_4_state = digitalRead(button_4_pin);
  button_5_state = digitalRead(button_5_pin);
  button_6_state = digitalRead(button_6_pin);
  button_7_state = digitalRead(button_7_pin);
  button_8_state = digitalRead(button_8_pin);
  input_state = digitalRead(input_pin);
  

  // Series of if statements for determining if a button is pressed
  if (button_1_state == LOW) {
      
      digitalWrite(led2, LOW);  
      delay(400);          
      count1 += 1;      
  }

  if (button_2_state == LOW) {
      
      digitalWrite(led2, LOW); 
      delay(400);        
      count2 += 1;    
  }


  if (button_3_state == LOW) {
      
      digitalWrite(led2, LOW);
      delay(400); 
      count3 += 1; 
  }

  if (button_4_state == LOW) {
      
      digitalWrite(led2, LOW);
      delay(400); 
      count4 += 1;
  }

  if (button_5_state == LOW) {
      
      digitalWrite(led2, LOW);
      delay(400); 
      count5 += 1;
  }


  if (button_6_state == LOW) {
      
      digitalWrite(led2, LOW);
      delay(400); 
      count6 += 1;
  }

  if (button_7_state == LOW) {
      
      digitalWrite(led2, LOW);
      delay(400); 
      count7 += 1; 
  }

  if (button_8_state == LOW) {
      
      digitalWrite(led2, LOW);
      delay(400); 
      count8 += 1;  
  }


  // When the input button is pressed, print a letter depending on the value of each buttons count
  if (input_state == LOW) {
      
      if (count1 == 1) 
      {Serial.print('a');}
      if (count1 == 2) 
      {Serial.print('b');}
      if (count1 == 3) 
      {Serial.print('c');}
      
      if (count2 == 1) 
      {Serial.print('d');}
      if (count2 == 2) 
      {Serial.print('e');}
      if (count2 == 3) 
      {Serial.print('f');}
      
      if (count3 == 1) 
      {Serial.print('g');}
      if (count3 == 2) 
      {Serial.print('h');}
      if (count3 == 3) 
      {Serial.print('i');}
      
      if (count4 == 1) 
      {Serial.print('j');}
      if (count4 == 2) 
      {Serial.print('k');}
      if (count4 == 3) 
      {Serial.print('l');}

      if (count5 == 1) 
      {Serial.print('m');}
      if (count5 == 2) 
      {Serial.print('n');}
      if (count5 == 3) 
      {Serial.print('o');}

      if (count6 == 1) 
      {Serial.print(' ');}
      if (count6 == 2) 
      {Serial.print('p');}
      if (count6 == 3) 
      {Serial.print('q');}
      if (count6 == 4) 
      {Serial.print('r');}

      if (count7 == 1) 
      {Serial.print('s');}
      if (count7 == 2) 
      {Serial.print('t');}
      if (count7 == 3) 
      {Serial.print('u');}
      if (count7 == 4) 
      {Serial.print('v');}

      if (count8 == 1) 
      {Serial.print('w');}
      if (count8 == 2) 
      {Serial.print('x');}
      if (count8 == 3) 
      {Serial.print('y');}
      if (count8 == 4) 
      {Serial.print('z');}

      // Set the counts back to 0
      count1 = 0;
      count2 = 0;
      count3 = 0;
      count4 = 0;
      count5 = 0;
      count6 = 0;
      count7 = 0;
      count8 = 0;
  }

  // Leave the led on at all times if a button is pressed
   else {
    digitalWrite(led2, HIGH);
   }   
  }


  
  




