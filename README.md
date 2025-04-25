# Desafio Super Trunfo - Países - Batalha das Cartas - Atualizado: 25/04

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde você comparará os atributos das cidades.

Este programa em C permite comparar duas cartas de países com base em diferentes atributos, como população, área, PIB, número de pontos turísticos e densidade demográfica.
Pré-requisitos
•	Compilador C: Você precisará de um compilador C instalado em seu sistema (por exemplo, GCC).
Como Compilar
1.	Salve o código: Salve o código fonte em um arquivo com a extensão .c (por exemplo, cartas.c).
2.	Abra o terminal ou prompt de comando: Navegue até o diretório onde você salvou o arquivo cartas.c.
3.	Compile o programa: Utilize o seguinte comando no terminal para compilar o código usando o GCC:
Bash
gcc cartas.c -o cartas
Este comando irá gerar um arquivo executável chamado cartas (ou cartas.exe no Windows).
Como Executar
1.	Navegue até o diretório (se necessário): Certifique-se de estar no diretório onde o arquivo executável cartas foi criado.
2.	Execute o programa: 
o	Linux/macOS: Execute o programa com o seguinte comando:
Bash
./cartas
o	Windows: Execute o programa com o seguinte comando:
Bash
cartas.exe
Instruções de Uso
Ao executar o programa, você seguirá os seguintes passos:
1.	Inserir Dados da Carta 1: O programa solicitará que você insira os dados da primeira carta de país, incluindo:
o	Sigla do Estado (ex: CE)
o	Código da carta (ex: A01)
o	Nome da Cidade (ex: Fortaleza)
o	População (número inteiro)
o	Área (em km², número decimal)
o	PIB (em bilhões de reais, número decimal)
o	Número de Pontos Turísticos (número inteiro)
Siga as instruções e pressione Enter após cada entrada.
2.	Inserir Dados da Carta 2: Em seguida, o programa solicitará as mesmas informações para a segunda carta de país.
3.	Escolher Atributos para Comparação: Um menu será exibido com os atributos disponíveis para comparação:
4.	Escolha o PRIMEIRO atributo para comparar as cartas:
5.	1 - População
6.	2 - Área
7.	3 - PIB
8.	4 - Número de Pontos Turísticos
9.	5 - Densidade Demográfica
10.	0 - Sair
11.	Digite sua escolha:
Digite o número correspondente ao atributo que você deseja usar para a primeira comparação e pressione Enter.
12.	Escolher o Segundo Atributo: Um segundo menu dinâmico será exibido, listando os atributos disponíveis para a segunda comparação (o atributo já escolhido não estará presente):
13.	Escolha o SEGUNDO atributo para comparar as cartas:
14.	1 - População
15.	2 - Área
16.	3 - PIB
17.	4 - Número de Pontos Turísticos
18.	5 - Densidade Demográfica
19.	0 - Sair
20.	Digite sua segunda escolha:
Selecione o número do segundo atributo e pressione Enter.
21.	Visualizar Resultados: O programa exibirá os resultados da comparação para cada um dos dois atributos escolhidos, mostrando os valores de cada carta e indicando qual carta venceu (ou se houve empate) em cada atributo. Além disso, será apresentada a soma das pontuações dos resultados individuais para determinar um vencedor geral da rodada.
22.	Repetir ou Sair: Após exibir os resultados, o menu para escolher o primeiro atributo será mostrado novamente, permitindo que você realize outra comparação com diferentes atributos ou digite 0 para sair do programa.
Atributos Disponíveis para Comparação
Os seguintes atributos podem ser usados para comparar as cartas:
1.	População: Número de habitantes da cidade. A carta com maior população vence.
2.	Área: Extensão territorial da cidade em quilômetros quadrados (km²). A carta com maior área vence.
3.	PIB: Produto Interno Bruto da cidade em bilhões de reais. A carta com maior PIB vence.
4.	Número de Pontos Turísticos: Quantidade de atrações turísticas na cidade. A carta com mais pontos turísticos vence.
5.	Densidade Demográfica: Número de habitantes por quilômetro quadrado (hab/km²). A carta com menor densidade demográfica vence.
Exemplos de Uso dos Menus
Exemplo 1: Comparando População e PIB
Escolha o PRIMEIRO atributo para comparar as cartas:
1 - População
2 - Área
3 - PIB
4 - Número de Pontos Turísticos
5 - Densidade Demográfica
0 - Sair
Digite sua escolha: 1

Escolha o SEGUNDO atributo para comparar as cartas:
2 - Área
3 - PIB
4 - Número de Pontos Turísticos
5 - Densidade Demográfica
0 - Sair
Digite sua segunda escolha: 3
Neste exemplo, o usuário escolheu comparar as cartas primeiro pela População e depois pelo PIB.
Exemplo 2: Comparando Área e Densidade Demográfica
Escolha o PRIMEIRO atributo para comparar as cartas:
1 - População
2 - Área
3 - PIB
4 - Número de Pontos Turísticos
5 - Densidade Demográfica
0 - Sair
Digite sua escolha: 2

Escolha o SEGUNDO atributo para comparar as cartas:
1 - População
3 - PIB
4 - Número de Pontos Turísticos
5 - Densidade Demográfica
0 - Sair
Digite sua segunda escolha: 5
Aqui, a comparação será feita pela Área e pela Densidade Demográfica.
Lembre-se de seguir as instruções do programa para inserir os dados das cartas e escolher os atributos desejados para a comparação.
