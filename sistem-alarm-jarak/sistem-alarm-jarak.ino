const int pinTrig = 3; 
const int pinEcho = 2; 

const int pinLED = 13;  

void setup() {
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);  
  pinMode(pinLED, OUTPUT);  
  
  Serial.begin(9600);       
  Serial.println("--- Sensor mulai membaca data ---");
}

void loop() {
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  
  long durasi = pulseIn(pinEcho, HIGH);
  
  int jarak = durasi * 0.034 / 2;
  
  Serial.print("Jarak Benda: ");
  Serial.print(jarak);
  Serial.println(" cm");

  if (jarak > 0 && jarak < 20) { 
    digitalWrite(pinLED, HIGH);
    Serial.println(" -> STATUS: ADA BENDA MENDEKAT! (LED NYALA)");
  } else {
    digitalWrite(pinLED, LOW); 
    Serial.println(" -> STATUS: Tidak ada benda mendekat (LED MATI)");
  }

  delay(300);
}