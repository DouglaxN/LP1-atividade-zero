# Linguagem de Programação 1 – Exercícios em C

**Aluno:** Douglas Nunes da Silva

**Disciplina:** Linguagem de Programação 1  

**Professor:** Issac Franco Fernandes

**Período:** 2025.2 

---

## 📚 Objetivo do Repositório

Este repositório contém quatro programas desenvolvidos em **C**, com o objetivo de praticar conceitos fundamentais de programação, incluindo:  

- Estruturas de repetição (`for`)  
- Arrays  
- Operações matemáticas (fatorial e soma)  
- Estruturas condicionais (`if-else`)  

Cada arquivo corresponde a uma questão distinta, sendo os nomes dos arquivos: `questao_1.c`, `questao_2.c`, `questao_3.c` e `questao_4.c`.

---

## 🔹 Questão 1 — `questao_1.c`  

**Objetivo:**  
Imprimir todos os números de 1 até N, onde N é fornecido pelo usuário.  

**Descrição do Programa:**  
O programa utiliza um laço `for` para iterar de 1 até N, exibindo cada número na tela. Este exercício introduz o conceito de controle de fluxo em C.

---

## 🔹 Questão 2 — `questao_2.c`  

**Objetivo:**  
Calcular o fatorial de um número inteiro fornecido pelo usuário.  

**Descrição do Programa:**  
O programa inicializa uma variável para armazenar o fatorial e utiliza um laço `for` para multiplicar sequencialmente os números de 1 até N. Este exercício reforça o conceito de iteração e acumulação de valores.

---

## 🔹 Questão 3 — `questao_3.c`  

**Objetivo:**  
Ler 5 números inteiros, armazená-los em um array e calcular a soma total desses números.  

**Descrição do Programa:**  
O programa utiliza um array de tamanho 5 e um laço `for` para receber os valores do usuário e acumular a soma em uma variável. Este exercício aborda conceitos de arrays e operações aritméticas básicas.

---

## 🔹 Questão 4 — `questao_4.c`  

**Objetivo:**  
Converter temperaturas entre Celsius e Fahrenheit.  

**Descrição do Programa:**  
O programa solicita ao usuário que escolha a direção da conversão (Celsius → Fahrenheit ou Fahrenheit → Celsius) e utiliza estruturas condicionais `if-else` para realizar o cálculo.

---

## ⚙️ Como compilar e executar

Para compilar os programas, utilize o compilador **gcc**:

```bash
# Compilar cada questão
gcc questao_1.c -o 1
gcc questao_2.c -o 2
gcc questao_3.c -o 3
gcc questao_4.c -o 4

./1    # Executa a Questão 1
./2    # Executa a Questão 2
./3    # Executa a Questão 3
./4    # Executa a Questão 4
