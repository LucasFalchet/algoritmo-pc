# Algoritmos e Pensamento Computacional
## 2º Semestre
#### Professor Marco Antonio Sanches Anastacio
#### Lucas Casagrande Falchet - RGM: 547735236

## Objetivo do Repositório

Este espaço foi criado para armazenar, organizar e versionar os códigos, exercícios e projetos práticos desenvolvidos durante a disciplina de **Algoritmos e Pensamento Computacional** do curso de Ciência da Computação na **Universidade Cruzeiro do Sul**.

O foco principal deste repositório é documentar minha evolução na construção da lógica de programação e na resolução iterativa de problemas. Aqui você encontrará implementações de lógica condicional, laços de repetição, funções de entrada/saída e manipulação de arrays, desenvolvidos passo a passo utilizando a linguagem **C**.

## [Aula 2](Aula_02): Fundamentos de C, Entrada/Saída e Operadores Matemáticos

Esta aula teve como foco a introdução à sintaxe básica da linguagem C e a construção de algoritmos sequenciais para cálculos matemáticos. Com base nos exercícios, os principais conceitos explorados foram:

**Estrutura Básica e Bibliotecas:** Introdução das bibliotecas padrão stdio.h (para entrada e saída de dados) e locale.h (junto com a função setlocale para habilitar a acentuação correta em português no terminal).

**Variáveis e Tipos de Dados:** Declaração e manipulação de variáveis dos tipos inteiro (int) e ponto flutuante (float).

**Interação com o Usuário (I/O):** Uso de printf para exibir instruções na tela e scanf para ler as respostas do usuário, incluindo a formatação de casas decimais na saída de resultados (ex: %.2f).

**Expressões e Operações Matemáticas:** Resolução de problemas práticos através de fórmulas, como cálculo de área e perímetro geométrico (exercicio01_raio.c e exercicio02_jardim.c), estimativas de tempo e volume (exercicio03_semana.c e exercicio04_agua.c) e média aritmética (exercicio05_media.c).

**Conversão de Tipos (Type Casting):** Uso da conversão explícita de tipos, como (float), para garantir a precisão decimal correta durante divisões em cálculos matemáticos.


## [Aula 3](Aula_03): Expressões Matemáticas Complexas e Biblioteca

Nesta aula, houve um aprofundamento significativo na complexidade dos cálculos, com a introdução de novas bibliotecas e funções em C para resolver problemas práticos de geometria, física e negócios. Com base nos exercícios, os principais conceitos explorados foram:

**Operações Básicas e Lógica Aplicada:** Criação de algoritmos para soma de inventário de produtos, conversão de horas para minutos, operações fundamentais de uma calculadora e estimativa de consumo de energia elétrica em KWh.

**Cálculos de Médias:** Implementação de lógicas para calcular a média aritmética simples de quatro valores e a média ponderada com pesos distintos.

**Introdução à Biblioteca <math.h>:** Inclusão e utilização da biblioteca matemática padrão da linguagem C para lidar com fórmulas mais avançadas.

**Funções de Exponenciação e Raiz:** Utilização da função pow() para elevar valores ao quadrado, como no cálculo do IMC e em fórmulas espaciais, e da função sqrt() para extrair a raiz quadrada no cálculo da distância entre dois pontos.


## [Aula 4](Aula_04): Estruturas de Controle Condicional

Esta aula focou-se na introdução e aplicação da lógica condicional na linguagem C, permitindo que os programas tomem decisões com base em diferentes cenários e entradas do utilizador. Com base nos exercícios desenvolvidos, os principais conceitos explorados foram:

**Estruturas Condicionais Simples e Compostas:** Utilização de if, else if e else para validar condições matemáticas, como a verificação do valor de delta para o cálculo das raízes de uma equação do 2º grau.

**Estrutura de Seleção Múltipla (switch/case):** Implementação de menus de seleção utilizando a estrutura switch/case e o comando break.

**Manipulação de Caracteres (char):** Leitura de variáveis do tipo caractere para tomada de decisão. Inclusão da biblioteca <ctype.h> e utilização da função toupper() para converter a entrada do utilizador automaticamente para maiúscula


## [Aula 5](Aula_05): Projeto Prático 1 - Sistema de Gestão "Arena Tech"

Nesta aula, o foco foi a consolidação dos conhecimentos através de um projeto prático que unifica os conceitos de variáveis, cálculos matemáticos e estruturas condicionais. O código desenvolvido simula o planejamento logístico, financeiro e de infraestrutura para um evento de e-sports chamado "Arena Tech". Os principais conceitos aplicados foram:

**Integração de Regras de Negócio:** Criação de um fluxo completo de entrada, processamento e saída, gerenciando múltiplas variáveis (inteiras e flutuantes) para simular um cenário real de orçamentação e alocação de recursos.

**Cálculos de Consumo e Financeiros:** Implementação de fórmulas sequenciais para descobrir o consumo de energia em kWh, o custo total do evento, o custo por participante e o saldo restante do orçamento. O projeto também retoma o uso da biblioteca <math.h> e da função ceil() para arredondamento no cálculo de times.

**Sistema de Diagnóstico e Decisão:** Construção de uma árvore de decisão baseada em if/else if/else que cruza os dados de infraestrutura, margem de segurança do orçamento (limite de 5%) e classificação de consumo de energia.

**Lógica Condicional Avançada:** Utilização intensiva de operadores lógicos relacionais (>=, <, ==) combinados com os operadores lógicos && (AND) e || (OR) para avaliar múltiplos cenários simultaneamente.


## [Aula 6](Aula_06): Estruturas de Repetição

Esta aula marcou a introdução aos laços de repetição (ciclos), essenciais para executar blocos de código múltiplas vezes de forma automatizada. Através dos exercícios, foram exploradas diferentes formas de iterar dados, validar entradas e acumular valores de forma contínua. Os principais conceitos aplicados foram:

**Ciclo for (Repetição com limite definido):** Utilizado para cenários com um número previamente conhecido de iterações, como a leitura sequencial de cinco preços num sistema de caixa ou a inserção de cinco notas para cálculo estatístico da turma.

**Ciclos do-while e Validação de Dados:** Implementação de repetições que garantem a execução do bloco de código pelo menos uma vez antes de testar a condição.

**Ciclos Infinitos e Interrupção (break):** Criação de um sistema de autenticação (login) apoiado num ciclo infinito while(1). A estrutura recorreu a um contador decrescente (tentativas--) para gerir a quantidade de erros permitidos, utilizando o comando break para bloquear o utilizador e forçar a saída do ciclo quando o limite de tentativas foi atingido.


## [Aula 7](Aula_07): 
