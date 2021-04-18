const int pino_botao1 = 7;
const int pino_botao2 = 8;
const int pino_botao3 = 9;
const int pino_buzzer = 10;
const int pino_led1 = 11;
const int pino_led2 = 12;
const int pino_led3 = 13;

const int c = 261;                              
const int d = 293;
const int e = 329;
const int f = 349;                            // Definindo as notas musicais.
const int g = 391;
const int a = 440;
const int b = 493;

void setup() {
  pinMode(pino_botao1, INPUT_PULLUP);
  pinMode(pino_botao2, INPUT_PULLUP);
  pinMode(pino_botao3, INPUT_PULLUP);
  pinMode(pino_buzzer, OUTPUT);
  pinMode(pino_led1, OUTPUT);
  pinMode(pino_led2, OUTPUT);
  pinMode(pino_led3, OUTPUT);
}

void loop() {
  bool estado_botao1 = digitalRead(pino_botao1);                            
  bool estado_botao2 = digitalRead(pino_botao2);                      // Declarando e definindo variáveis booleanas que armazenarão os status dos botões (se estão pressionados ou não).
  bool estado_botao3 = digitalRead(pino_botao3);

  if (estado_botao1 == LOW) {                                         // Se o botão 1 estiver pressionado: tocar nota dó e acender o led 1.
    tone(pino_buzzer, c);
    digitalWrite(pino_led1, HIGH);
    digitalWrite(pino_led2, LOW);
    digitalWrite(pino_led3, LOW);
  } else if (estado_botao2 == LOW) {                                  // Se o botão 2 estiver pressionado: tocar nota ré e acender o led 2.
    tone(pino_buzzer, d);                                           
    digitalWrite(pino_led1, LOW);
    digitalWrite(pino_led2, HIGH);
    digitalWrite(pino_led3, LOW);
  } else if (estado_botao3 == LOW) {                                  // Se o botão 3 estiver pressionado: tocar nota mi e acender o led 3.
    tone(pino_buzzer, e);
    digitalWrite(pino_led1, LOW);
    digitalWrite(pino_led2, LOW);
    digitalWrite(pino_led3, HIGH);
  } else {
    noTone(pino_buzzer);
    digitalWrite(pino_led1, LOW);
    digitalWrite(pino_led2, LOW);
    digitalWrite(pino_led3, LOW);
  }
}
