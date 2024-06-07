# Edge-Computing

## Integrantes
- Caio Felipe de Lima Bezerra | RM 556197
- Gabriel Terra Lilla dos Santos | RM 554575
- Ricardo Cerazi di Tilia | RM 555155

## Descrição
Este projeto monitora as condições ambientais para a fotossíntese de algas marinhas. Utiliza um sensor de temperatura DHT22, um sensor de luminosidade LDR e um display LCD I2C para medir e exibir a temperatura e a luminosidade. O sistema também indica se os valores medidos estão em níveis críticos ou normais, o que pode ser um indicativo da qualidade da água.

## Componentes
- **Sensor DHT22**:
  - VCC: 5V
  - GND: GND
  - DATA: Pino digital 7 do Arduino

- **Sensor LDR**:
  - Um terminal conectado ao 5V
  - Outro terminal conectado ao pino A0 do Arduino e ao GND através de um resistor de 10kΩ

- **Display LCD I2C**:
  - VCC: 5V
  - GND: GND
  - SDA: Pino A4 do Arduino
  - SCL: Pino A5 do Arduino

## Instruções de Uso no Wokwi
1. Acesse o site do Wokwi.
2. Crie um novo projeto selecionando 'Arduino Uno' como placa.
3. Monte o circuito virtual utilizando os componentes mencionados acima.
4. Abra o editor de código do Wokwi e insira o código fornecido.
5. Clique em 'Run' para simular o projeto.
6. Observe os resultados no display LCD virtual.

## Requisitos
- Acesso à internet.
- Navegador compatível para acessar a plataforma Wokwi.

## Dependências
As seguintes bibliotecas são necessárias e podem ser adicionadas diretamente no Wokwi:

- **DHT Sensor Library**:
  - Procure por "DHT sensor library" de Adafruit na biblioteca do Wokwi e adicione ao projeto.

- **LiquidCrystal_I2C**:
  - Procure por "LiquidCrystal_I2C" na biblioteca do Wokwi e adicione ao projeto.

## Link do Projeto
- [Projeto Edge-Computing no Wokwi](https://wokwi.com/projects/399855460841373697)
