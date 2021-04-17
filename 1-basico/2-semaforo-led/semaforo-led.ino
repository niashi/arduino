void setup() {
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT);                  
  pinMode(11, OUTPUT);                 // Configurando as saídas 13, 12, 11, 10 e 9 para receberem os leds.
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);               // Semáforo verde p/ pedestres durante 2 segundos.
  digitalWrite(13, HIGH);              // Semáforo vermelho p/ veículos durante 2 segundos.
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(2000);
  
  //          
  digitalWrite(9, LOW);                
  digitalWrite(13, LOW);               
  digitalWrite(12, HIGH);              // Semáforo amarelo p/ veículos durante 2 segundos.
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  
  delay(500);
  digitalWrite(10, LOW);               // Semáforo vermelho piscante para pedestres enquanto o semáforo amarelo para veículos está ativo.
  delay(500);                          
  digitalWrite(10, HIGH);  
  delay(500);
  digitalWrite(10, LOW);  
  delay(500);
  //
  
  digitalWrite(10, HIGH);              // Semáforo vermelho p/ pedestres durante 2 segundos.
  digitalWrite(9, LOW);                 
  digitalWrite(13, LOW);               
  digitalWrite(12, LOW);               
  digitalWrite(11, HIGH);              // Semáforo verde p/ veículos durante 2 segundos.
  delay(2000);
}
