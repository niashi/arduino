void setup() {                                  // A função setup() roda uma vez sempre que a placa é resetada ou energizada.
  pinMode(LED_BUILTIN, OUTPUT);                 // Define o pin digital LED_BUILTIN como output (saída). Por convenção, a porta LED_BUILTIN é a 13, ou seja, o led está conectado  
}                                               // fisicamente na porta 13 do arduino.

void loop() {                                   // A função loop() roda indefinidamente.
  digitalWrite(LED_BUILTIN, HIGH);              
  delay(100);                                   
  digitalWrite(LED_BUILTIN, LOW);               // "Escreve" digitalmente o status do led (HIGH - ON / LOW - OFF).
  delay(1000);                                  // Delay de 1 segundo.
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);                                  
}
