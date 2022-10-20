#define RIGHT        1
#define LEFT         2
#define BACK         3
#define FORWARD      4 
#define PULLUP       5
#define PULLDOWN     6
#define PULLREMOVE   7
#define TOUCH1       33
#define TOUCH2       34
#define TOUCH3       35
#define TOUCH4       36
#define TOUCH5       37

int enable = 0;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);

  while(!Serial)
  Serial.println("Serial Enabled");
}

void loop() {
  uint8_t raw = Serial1.read();
  uint8_t data = 0;

  if (enable == 1){
    data = raw;
    enable = 0;
  }
  else;

  if (raw == 170) 
    enable = 1;
  else;

  if (data == RIGHT)  Serial.println("RIGHT DETECTED");
  else if(data == LEFT) Serial.println("LEFT DETECTED");
  else if(data == BACK) Serial.println("BACK DETECTED");
  else if(data == FORWARD)  Serial.println("FOWARD DETECTED");
  else if(data == PULLUP) Serial.println("PULLUP DETECTED");
  else if(data == PULLDOWN) Serial.println("PULLDOWN DETECTED");
  else if(data == PULLREMOVE) Serial.println("PULLREMOVE DETECTED");
  else if(data == TOUCH1) Serial.println("TOUCH1 DETECTED");
  else if(data == TOUCH2) Serial.println("TOUCH2 DETECTED");
  else if(data == TOUCH3) Serial.println("TOUCH3 DETECTED");
  else if(data == TOUCH4) Serial.println("TOUCH4 DETECTED");
  else if(data == TOUCH5) Serial.println("TOUCH5 DETECTED");
  else;

  delay(100);
}
