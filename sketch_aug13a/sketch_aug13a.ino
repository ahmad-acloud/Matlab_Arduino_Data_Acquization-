String readString;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);  
 Serial.setTimeout(3);
Serial.println("Initiating Reading..."); 
}

void loop() {
  // put your main code here, to run repeatedly:
 while (Serial.available()) {
    delay(3);  //delay to allow buffer to fill
    if (Serial.available() >0) {
      char c = Serial.read();  //gets one byte from serial buffer
      readString += c; //cat chars to readString
    }
 }
   if (readString.length() > 0) {
   
  Serial.print(intro+readString); //see what was received
  Serial.println();

  readString = "";
  delay(3000);
 }
