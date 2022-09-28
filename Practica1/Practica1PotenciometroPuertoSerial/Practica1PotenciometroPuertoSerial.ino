void setup() {
  Serial.begin(9600);
}

void loop() {
  float sensorValue = analogRead(A0);
  //Serial.println(sensorValue);
  float Estimado= map(sensorValue,0,682,272,0);
  Serial.print("Ángulo estimado valor potenciómetro=");
  Serial.println(Estimado);
  if(sensorValue>=679){
    Serial.println("Confirmación de marca, Confirmación de marca, Ángulo 0°");
  }
  if((669>=sensorValue)&&(sensorValue>=659)){
    Serial.println("Confirmación de marca, Ángulo 9°");
  }
  if((650>=sensorValue)&&(sensorValue>=640)){
    Serial.println("Confirmación de marca, Ángulo 18°");
  }
  if((632>=sensorValue)&&(sensorValue>=622)){
    Serial.println("Confirmación de marca, Ángulo 27°");
  }
  if((605>=sensorValue)&&(sensorValue>=595)){
    Serial.println("Confirmación de marca, Ángulo 36°");
  }
  if((580>=sensorValue)&&(sensorValue>=570)){
    Serial.println("Confirmación de marca, Ángulo 45°");
  }
  if((560>=sensorValue)&&(sensorValue>=550)){
    Serial.println("Confirmación de marca, Ángulo 54°");
  }
  if((542>=sensorValue)&&(sensorValue>=532)){
    Serial.println("Confirmación de marca, Ángulo 63°");
  }
  if((525>=sensorValue)&&(sensorValue>=510)){
    Serial.println("Confirmación de marca, Ángulo 72°");
  }
  if((505>=sensorValue)&&(sensorValue>=495)){
    Serial.println("Confirmación de marca, Ángulo 81°");
  }
  if((482>=sensorValue)&&(sensorValue>=472)){
    Serial.println("Confirmación de marca, Ángulo 90°");
  }
  if((463>=sensorValue)&&(sensorValue>=453)){
    Serial.println("Confirmación de marca, Ángulo 99°");
  }
  if((435>=sensorValue)&&(sensorValue>=425)){
    Serial.println("Confirmación de marca, Ángulo 108°");
  }
  if((408>=sensorValue)&&(sensorValue>=398)){
    Serial.println("Confirmación de marca, Ángulo 117°");
  }
  if((395>=sensorValue)&&(sensorValue>=380)){
    Serial.println("Confirmación de marca, Ángulo 126°");
  }
  if((360>=sensorValue)&&(sensorValue>=350)){
    Serial.println("Confirmación de marca, Ángulo 135°");
  }
  if((340>=sensorValue)&&(sensorValue>=330)){
    Serial.println("Confirmación de marca, Ángulo 144°");
  }
  if((305>=sensorValue)&&(sensorValue>=295)){
    Serial.println("Confirmación de marca, Ángulo 153°");
  }
  if((280>=sensorValue)&&(sensorValue>=270)){
    Serial.println("Confirmación de marca, Ángulo 162°");
  }
  if((255>=sensorValue)&&(sensorValue>=245)){
    Serial.println("Confirmación de marca, Ángulo 171°");
  }
  if((230>=sensorValue)&&(sensorValue>=220)){
    Serial.println("Confirmación de marca, Ángulo 180°");
  }
  if((205>=sensorValue)&&(sensorValue>=195)){
    Serial.println("Confirmación de marca, Ángulo 189°");
  }
  if((183>=sensorValue)&&(sensorValue>=173)){
    Serial.println("Confirmación de marca, Ángulo 198°");
  }
  if((155>=sensorValue)&&(sensorValue>=145)){
    Serial.println("Confirmación de marca, Ángulo 207°");
  }
  if((135>=sensorValue)&&(sensorValue>=125)){
    Serial.println("Confirmación de marca, Ángulo 216°");
  }
  if((110>=sensorValue)&&(sensorValue>=100)){
    Serial.println("Confirmación de marca, Ángulo 225°");
  }
  if((86>=sensorValue)&&(sensorValue>=76)){
    Serial.println("Confirmación de marca, Ángulo 234°");
  }
  if((65>=sensorValue)&&(sensorValue>=55)){
    Serial.println("Confirmación de marca, Ángulo 243°");
  }
  if((42>=sensorValue)&&(sensorValue>=32)){
    Serial.println("Confirmación de marca, Ángulo 252°");
  }
  if((20>=sensorValue)&&(sensorValue>=10)){
    Serial.println("Confirmación de marca, Ángulo 261°");
  }
  if(sensorValue<=6){
    Serial.println("Confirmación de marca, Ángulo 270°");
  }
  Serial.println();
  delay(1000);
}
