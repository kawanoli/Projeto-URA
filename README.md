# Construção de uma matriz de LED controlada via arduino
_Neste projeto, construí um sistema com uma matriz 3x3 de leds e um arduino para a exibição de vetores e projeção matemática, de modo a facilitar o processo de visão espacial dos alunos com o uso da ferramenta criada. A visão espacial é uma habilidade matemática fundamental dentro dos cursos de engenharia, em especial os que são ministrados dentro da UFRN, sendo assim bastante necessário o trabalho da mesma com os discentes de modo a facilitar o aprendizado._

_O desenvolvimento do projeto teve seu início com o pensamento de uma ferramenta que gostaria que eu pudesse ter tido ao meu lado durante o início da faculdade. Por meio do uso da robótica educacional, decidiu-se pela criação de um sistema baseado em uma matriz de LED para a construção de retas e planos, de modo a se facilitar a visualização das situações que são sempre mostradas nas fórmulas, mas que com muita dificuldade são mostradas visualmente para os alunos._

# Explicação do circuito montado
Para a criação do protótipo inicial do circuito, foi usado o software Tinkercad, de modo a ter proporcionado um ambiente livre de prejuízos decorridos de falhas mecânicas, permitindo assim uma diferente gama de testes para o circuito final e o seu funcionamento, podendo assim escolher qual a melhor forma de executar o acendimento dos leds, funcionamento dos botões e correção de falhas indesejadas no circuito, como o funcionamento diferente do esperado dos botões.

Após diversos testes de funcionalidade, e após escolhida a forma julgada mais eficiente para realizar a execução dos códigos do projeto, o protótipo inicial tomou esta forma:

***lembrar de inserir foto

1.1. Conexões relacionadas a placa 1
A tabela 1 configura as conexões do arduíno com o circuito:
| ENTRADAS PROTOBOARD | ENTRADAS ARDUINO |
| ------ | ------ |
| GND | GND |
| VCC | VCC |
| BOTÕES | PINOS 13 E 12 |
| LEDS | PINOS 2 AO 9 |



# Explicação do código utilizado
O código destinado ao projeto da matriz de LED controlada por arduino teve como principal função ligar vários LEDS distintos de uma só vez por meio de apenas um comando, de forma a não precisar ligar cada LED individualmente, um de cada vez. Por mais simples que pareça sua execução, para a finalidade buscada neste projeto, foi-se necessário usar de conceitos um pouco mais avançados da eletrônica, fugindo um pouco da ideia de uso de componentes e códigos simples; durante a construção do protótipo do circuito, percebeu-se que se fazia necessário o uso de um _pull up_ para cada botão, de modo a impedir que os LEDS ficam acesos apenas durante o pressionamento dos botões, além de ter-se feito necessário o uso de operadores ternários para fazer uma decisão simples com base em uma condição, servindo estes para o sistema _pull up_.

1. Definição dos pinos:
   - O código começa com a definição dos pinos digitais para os LEDS e para os botões, tendo sido escolhidos de 2 a 9 para os LEDS, e os pinos 13 e 12 para os botões. Optou-se por não usar os pinos digitais 0 e 1 pois os mesmos são reservados para a transmissão de dados no arduino, o que acabaria tirando um pouco a possibilidade de adição de um sistema de controle wireless no futuro.

2. Declaração de variáveis:
   - Variáveis booleanas são definidas para controlar o estado atual dos LEDS de uma sequência, e o estado atual dos botões.

3. Função de configuração (setup):
   - Define o modo dos pinos dos botões como entrada.
   - Define o modo dos pinos dos LEDS como saída.

4. Função "loop":
   - Realiza-se a leitura do estado dos botões.
   - Executa-se a lógica do acendimento dos LEDS de um dos exemplos caso o botão designado para o exemplo seja apertado (verifica-se todos os botões para que possa executar o/os que estão pressionado(s)).
   - Introduz um pequeno atraso para evitar falhas devido a atualizações muito frequentes.

