double pulse, frequency, capacitance, inductance;
void setup(){
pinMode(11, INPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
}
void loop(){
digitalWrite(13, HIGH);
delay(5);
digitalWrite(13,LOW);
delayMicroseconds(100);
pulse = pulseIn(11,HIGH,5000);
if(pulse > 0.1){
capacitance = 1.E-6;
frequency = 1.E6/(2*pulse);
inductance = 1./(capacitance*frequency*frequency*4.*3.14159*3.14159);
inductance *= 1E6;
Serial.println("Inductance:");
Serial.println(inductance);
delay(10);
}
}
