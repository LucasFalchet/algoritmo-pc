# Algoritmos e Pensamento Computacional
## 2º Semestre
#### Professor Marco Antonio Sanches Anastacio
#### Lucas Casagrande Falchet - RGM: 547735236

## Objetivo do Repositório

Este espaço foi criado para armazenar, organizar e versionar os códigos, exercícios e projetos práticos desenvolvidos durante a disciplina de **Algoritmos e Pensamento Computacional** do curso de Ciência da Computação na **Universidade Cruzeiro do Sul**.

O foco principal deste repositório é documentar minha evolução na construção da lógica de programação e na resolução iterativa de problemas. Aqui você encontrará implementações de lógica condicional, laços de repetição, funções de entrada/saída e manipulação de arrays, desenvolvidos passo a passo utilizando a linguagem **C**.

<br>

### Detalhes sobre as aulas deste semestre:

## [Aula 2](Aula_02): Fundamentos de C, Entrada/Saída e Operadores Matemáticos
<details>
<summary>Conceitos abordados na Aula 2</summary>
<br> 

Esta aula teve como foco a introdução à sintaxe básica da linguagem C e a construção de algoritmos sequenciais para cálculos matemáticos. Com base nos exercícios, os principais conceitos explorados foram:

**Estrutura Básica e Bibliotecas:** Introdução das bibliotecas padrão stdio.h (para entrada e saída de dados) e locale.h (junto com a função setlocale para habilitar a acentuação correta em português no terminal).

**Variáveis e Tipos de Dados:** Declaração e manipulação de variáveis dos tipos inteiro (int) e ponto flutuante (float).

**Interação com o Usuário (I/O):** Uso de printf para exibir instruções na tela e scanf para ler as respostas do usuário, incluindo a formatação de casas decimais na saída de resultados (ex: %.2f).

**Expressões e Operações Matemáticas:** Resolução de problemas práticos através de fórmulas, como cálculo de área e perímetro geométrico (exercicio01_raio.c e exercicio02_jardim.c), estimativas de tempo e volume (exercicio03_semana.c e exercicio04_agua.c) e média aritmética (exercicio05_media.c).

**Conversão de Tipos (Type Casting):** Uso da conversão explícita de tipos, como (float), para garantir a precisão decimal correta durante divisões em cálculos matemáticos.
</details>


## [Aula 3](Aula_03): Expressões Matemáticas Complexas e Biblioteca
<details>
<summary>Conceitos abordados na Aula 3</summary>
<br>

Nesta aula, houve um aprofundamento significativo na complexidade dos cálculos, com a introdução de novas bibliotecas e funções em C para resolver problemas práticos de geometria, física e negócios. Com base nos exercícios, os principais conceitos explorados foram:

**Operações Básicas e Lógica Aplicada:** Criação de algoritmos para soma de inventário de produtos, conversão de horas para minutos, operações fundamentais de uma calculadora e estimativa de consumo de energia elétrica em KWh.

**Cálculos de Médias:** Implementação de lógicas para calcular a média aritmética simples de quatro valores e a média ponderada com pesos distintos.

**Introdução à Biblioteca <math.h>:** Inclusão e utilização da biblioteca matemática padrão da linguagem C para lidar com fórmulas mais avançadas.

**Funções de Exponenciação e Raiz:** Utilização da função pow() para elevar valores ao quadrado, como no cálculo do IMC e em fórmulas espaciais, e da função sqrt() para extrair a raiz quadrada no cálculo da distância entre dois pontos.
</details>


## [Aula 4](Aula_04): Estruturas de Controle Condicional
<details>
<summary>Conceitos abordados na Aula 4</summary>
<br>
  
Esta aula focou-se na introdução e aplicação da lógica condicional na linguagem C, permitindo que os programas tomem decisões com base em diferentes cenários e entradas do utilizador. Com base nos exercícios desenvolvidos, os principais conceitos explorados foram:

**Estruturas Condicionais Simples e Compostas:** Utilização de if, else if e else para validar condições matemáticas, como a verificação do valor de delta para o cálculo das raízes de uma equação do 2º grau.

**Estrutura de Seleção Múltipla (switch/case):** Implementação de menus de seleção utilizando a estrutura switch/case e o comando break.

**Manipulação de Caracteres (char):** Leitura de variáveis do tipo caractere para tomada de decisão. Inclusão da biblioteca <ctype.h> e utilização da função toupper() para converter a entrada do utilizador automaticamente para maiúscula
</details>


## [Aula 5](Aula_05): Projeto 1 - Sistema de Gestão "Arena Tech"
<details>
<summary>Detalhes do Projeto 1 - Arena Tech</summary>
<br>

Nesta aula, o foco foi a consolidação dos conhecimentos através de um projeto prático que unifica os conceitos de variáveis, cálculos matemáticos e estruturas condicionais. O código desenvolvido simula o planejamento logístico, financeiro e de infraestrutura para um evento de e-sports chamado "Arena Tech". Os principais conceitos aplicados foram:

**Integração de Regras de Negócio:** Criação de um fluxo completo de entrada, processamento e saída, gerenciando múltiplas variáveis (inteiras e flutuantes) para simular um cenário real de orçamentação e alocação de recursos.

**Cálculos de Consumo e Financeiros:** Implementação de fórmulas sequenciais para descobrir o consumo de energia em kWh, o custo total do evento, o custo por participante e o saldo restante do orçamento. O projeto também retoma o uso da biblioteca <math.h> e da função ceil() para arredondamento no cálculo de times.

**Sistema de Diagnóstico e Decisão:** Construção de uma árvore de decisão baseada em if/else if/else que cruza os dados de infraestrutura, margem de segurança do orçamento (limite de 5%) e classificação de consumo de energia.

**Lógica Condicional Avançada:** Utilização intensiva de operadores lógicos relacionais (>=, <, ==) combinados com os operadores lógicos && (AND) e || (OR) para avaliar múltiplos cenários simultaneamente.
</details>


## [Aula 6](Aula_06): Estruturas de Repetição
<details>
<summary>Conceitos abordados na Aula 6</summary>
<br>

Esta aula marcou a introdução aos laços de repetição (ciclos), essenciais para executar blocos de código múltiplas vezes de forma automatizada. Através dos exercícios, foram exploradas diferentes formas de iterar dados, validar entradas e acumular valores de forma contínua. Os principais conceitos aplicados foram:

**Ciclo for (Repetição com limite definido):** Utilizado para cenários com um número previamente conhecido de iterações, como a leitura sequencial de cinco preços num sistema de caixa ou a inserção de cinco notas para cálculo estatístico da turma.

**Ciclos do-while e Validação de Dados:** Implementação de repetições que garantem a execução do bloco de código pelo menos uma vez antes de testar a condição.

**Ciclos Infinitos e Interrupção (break):** Criação de um sistema de autenticação (login) apoiado num ciclo infinito while(1). A estrutura recorreu a um contador decrescente (tentativas--) para gerir a quantidade de erros permitidos, utilizando o comando break para bloquear o utilizador e forçar a saída do ciclo quando o limite de tentativas foi atingido.
</details>


## [Aula 7](Aula_07): Repetições Aninhadas, Vetores (Arrays) e Projeto 2 "Missão Orbital"
<details>
<summary>Conceitos abordados na Aula 7 e detalhes sobre o Projeto 2 - Missão Orbital</summary>
<br>
  
Nesta aula, além de aprofundar as estruturas de repetição, houve a introdução ao armazenamento estruturado de dados em memória através de vetores. A aula foi finalizada com o desenvolvimento do segundo projeto prático da disciplina. Com base nos códigos, os principais conceitos explorados foram:

**Validação Rigorosa com Laços Aninhados:** Utilização combinada de estruturas for, while e do-while para garantir a integridade dos dados inseridos pelo utilizador.

**Introdução aos Vetores (Arrays) e Strings:** Primeira utilização de arrays para guardar múltiplas informações em simultâneo na memória do programa.

**Lógica de Contadores e Acumuladores:** Implementação de variáveis dedicadas a contar ocorrências específicas, como a quantidade de números positivos e negativos, o total de alunos aprovados e o número de municípios com temperatura inferior a 10ºC.

**Projeto 2 - "Missão Orbital":** Desenvolvimento de um sistema integrado de classificação de cadetes espaciais que consolida a lógica de repetição. O projeto utiliza um laço while interno para processar e validar as três etapas de pontuação de um cadete, e engloba tudo num grande laço do-while externo, permitindo que o utilizador avalie múltiplos cadetes de forma contínua até decidir encerrar o sistema inserindo 0.
</details>


## [Aula 8](Aula_08): Vetores (Arrays), Matrizes, Constantes e Desafio das operadoras
<details>
<summary>Conceitos abordados na Aula 8</summary>
<br>
  
Nesta aula, o estudo de estruturas de dados estáticas foi aprofundado, englobando a manipulação de vetores unidimensionais e a introdução de matrizes (vetores bidimensionais). Os exercícios e o desafio proposto exploraram cálculos estatísticos, persistência de dados em memória durante a execução e algoritmos de busca. Os principais conceitos aplicados foram:

**Diretiva #define para Constantes:** Utilização de macros no cabeçalho dos programas (como #define TAM, #define LIN e #define COL) para estabelecer tamanhos fixos de vetores e matrizes, tornando o dimensionamento centralizado e facilitando a manutenção futura do código.

**Armazenamento em Vetores (1D):** Uso de laços de repetição for sequenciais para ler entradas do utilizador (como salários), preencher os índices do array e resgatar essas informações armazenadas para exibi-las na tela posteriormente.

**Matrizes (2D) e Laços Aninhados:** Criação de matrizes para organizar dados tabulares, como o volume de vendas cruzando "produto x dia" e o agrupamento de 4 notas para múltiplos estudantes.

**Desafio da Aula 8: Sistema de Relatório Anual (Operadoras):** Este desafio elevou o nível de complexidade ao trabalhar com dados pré-definidos na memória e realizar análises estatísticas cruzadas em uma base de dados estruturada. O código atua como um sistema de inteligência de negócios para analisar o volume de vendas de chips de três operadoras ao longo de 12 meses.
</details>


## [Aula 9](Aula_09): Manipulação de Arquivos e Persistência de Dados (File I/O)
<details>
<summary>Conceitos abordados na Aula 9</summary>
<br>
  
Nesta aula, ocorreu um avanço significativo: os programas deixaram de ser dependentes exclusivamente da memória RAM (onde os dados são perdidos ao fechar o programa) e passaram a interagir com o sistema de arquivos do computador, conseguindo salvar e ler dados de forma permanente em arquivos .txt. Com base nos exercícios propostos, os principais conceitos explorados foram:

**Abertura e Fechamento de Arquivos (fopen e fclose):** Implementação de ponteiros do tipo FILE * para estabelecer a comunicação com o sistema operativo.

**Modos de Escrita e Apensamento (Modo "a"):** Utilização do modo de abertura "append" ("a") para criar novos arquivos ou, se o arquivo já existir, adicionar novas informações no final do arquivo sem sobrescrever os dados anteriores.

**Modo de Leitura (Modo "r"):** Utilização do modo de abertura "read" ("r") para abrir arquivos de texto existentes e extrair as suas informações para dentro do programa C.
</details>


## [Aula 10](Aula_10): Modularização (Funções), Ponteiros, Estruturas (struct) e Desafio Monitoramento de consumo de energia de LDI
<details>
<summary>Conceitos abordados na Aula 10</summary>
<br>
  
Esta aula representou um grande salto na organização e arquitetura do código. Os programas deixaram de ser construídos num único bloco contínuo dentro do main() e passaram a ser divididos em blocos lógicos reutilizáveis, além de introduzir conceitos fundamentais de gestão de memória. Com base nos códigos desenvolvidos, os principais conceitos foram:

**Criação e Chamada de Funções:** Implementação da modularização através da criação de funções próprias. Foram utilizadas funções com retorno (como float para devolver os cálculos de fretes, médias e áreas) e funções do tipo void (sem retorno), focadas apenas em executar ações como imprimir resultados no terminal.

**Ponteiros e Passagem por Referência:** Introdução ao conceito de endereços de memória. Utilizando o operador & na chamada da função e o operador * (ponteiro) na sua definição, foi possível criar um algoritmo capaz de trocar os valores de duas variáveis originais, alterando-as diretamente na memória.

**Estruturas de Dados (struct):** Agrupamento de diferentes tipos de variáveis num único "pacote" ou entidade lógica através do comando typedef struct.

**Desafio Monitoramento de Consumo de Energia:** Projeto desenvolvido em linguagem C com o objetivo de monitorar e analisar o consumo semanal de energia elétrica de diferentes laboratórios. Aborda conceitos de manipulação de matrizes, modularização por funções, estruturas de repetição e análise de dados, permitindo gerar relatórios e identificar padrões de consumo.
</details>
