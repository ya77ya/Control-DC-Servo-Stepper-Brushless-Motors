int in1 = 7;
int in2 = 6;
int in3 = 12;
int in4 = 13;

void setup() {
 // put your setup code here, to run once:
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
}

void loop() {
  //Motor1
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
  //Motor2
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);
  
 delay(1000); // Wait for 1000 millisecond(s)
}
