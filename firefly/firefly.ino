void setup(){
   Serial.begin(9600);
   pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);
}

void loop(){
   int LED_map = random(9, 12);
   for(int i=255; i>=0; i-=5){
	analogWrite(LED_map, i);
	delay(50);  
   }
}

