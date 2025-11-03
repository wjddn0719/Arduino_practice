int RED = 9;
int GREEN = 10;
int BLUE = 11;

void setup(){
    Serial.begin(9600);
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(GREEN, OUTPUT);
}

void loop(){
    int brightness1 = random(0, 256);
    int brightness2 = random(0, 256);
    int brightness3 = random(0, 256);
    analogWrite(RED, brightness1);
    analogWrite(BLUE, brightness2);
    analogWrite(GREEN, brightness3);
    delay(1000);
}
