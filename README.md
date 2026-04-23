# Explicação de Lógica C para todos!

<p align="center">
  <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="C Language" width="100" height="100"/>
</p>

<p align="center">
  <strong>A base sólida para a mente de um desenvolvedor.</strong><br />
  Este repositório é um guia estruturado para quem deseja aprender a "pensar como um computador" utilizando o ambiente Dev-C++.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white" />
  <img src="https://img.shields.io/badge/IDE-Dev--C%2B%2B-004482?style=for-the-badge&logo=cplusplus&logoColor=white" />
  <img src="https://img.shields.io/badge/Focus-Logic-FFD700?style=for-the-badge" />
</p>

---

## 🖋️ Sobre o Projeto

Dominar a *Lógica de Programação* é o primeiro passo para o sucesso em qualquer carreira de tecnologia. Este projeto utiliza a linguagem C por sua proximidade com o hardware e sua sintaxe rigorosa, garantindo que o aprendizado seja profundo e não apenas superficial.

Este material foi desenhado para quem está no *zero absoluto*, transformando conceitos abstratos em códigos funcionais e eficientes.

## 🧠 Por que aprender Lógica com C?

Diferente de linguagens mais modernas que "escondem" a complexidade, a linguagem C exige que você entenda:
* *Estrutura:* Como organizar instruções de forma sequencial e lógica.
* *Tipagem:* A importância de definir exatamente o que cada dado representa.
* *Controle:* O domínio total sobre laços de repetição e condições.

---

## 🛠️ Ambiente de Desenvolvimento

Para este projeto, utilizamos o *Dev-C++*, uma IDE clássica, leve e extremamente poderosa para o aprendizado inicial.

* *Compilador:* TDM-GCC (integrado ao Dev-C++)
* *Vantagem:* Facilidade de configuração e execução imediata para iniciantes em Windows.

### Como Rodar os Códigos:
1. Abra o *Dev-C++*.
2. Vá em Arquivo > Abrir e selecione o arquivo .c.
3. Pressione a tecla *F11* para Compilar e Correr o programa simultaneamente.

---

## 🗺️ Trilha de Aprendizado (Do Zero ao Código)

O conteúdo está organizado para uma evolução natural do raciocínio:

1.  *Primeiros Passos:* Variáveis, tipos de dados e a função printf/scanf.
2.  *Tomada de Decisão:* Uso de if, else e switch para criar caminhos lógicos.
3.  *Repetições Inteligentes:* Dominando for e while para otimizar tarefas.
4.  *Organização de Dados:* Introdução a Vetores (Arrays) e Matrizes.
5.  *Modularização:* Criação de funções para tornar o código limpo e elegante.

---

## 🚀 Exemplo de Aplicação Prática

Abaixo, um exemplo de lógica para verificar se um aluno foi aprovado, um clássico da lógica inicial:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, media;

    printf("--- Sistema Escolar ---\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2
