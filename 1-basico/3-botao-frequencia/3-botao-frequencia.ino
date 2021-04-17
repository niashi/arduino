int frequencia = 5000;                                   // Declarando e definindo uma variável inicial da frequência.
const int pinoBuzzer = 10;                               // Declarando e definindo um valor constante para a saída digital conectada ao buzzer.
const int pinoBotao1 = 9;                                // Declarando e definindo um valor constante para a saída digital conectada ao primeiro botão.
const int pinoBotao2 = 11;                               // Declarando e definindo um valor constante para a saída digital conectada ao segundo botão.


void setup() {
  pinMode(pinoBuzzer, OUTPUT);                           // Declarando que o buzzer é uma saída.
  pinMode(pinoBotao1, INPUT_PULLUP);                     // Declarando que o botão 1 é uma entrada e habilitando um resistor interno da placa.
  pinMode(pinoBotao2, INPUT_PULLUP);                     // Declarando que o botão 2 é uma entrada e habilitando um resistor interno da placa.
}

void loop() {
  if (digitalRead(pinoBotao1) == LOW) {                  // Se o botão estiver pressionado, a frequência aumenta em 1000Hz.
    frequencia = frequencia + 1000;                       
  } 
  if (digitalRead(pinoBotao2) == LOW) {
    frequencia = frequencia - 1000;
  }

  tone(pinoBuzzer, frequencia);                          // Gera um tom do mesmo valor da variável frequencia.
  delay(1000);                                           // Delay de 1 segundo.
  noTone(pinoBuzzer);                                    // Para a emissão do tom.
  delay(1000);                                           // Delay de 1 segundo.
}
