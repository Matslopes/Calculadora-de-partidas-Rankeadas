# Calculadora de Nível de Jogador

Um programa simples em C que determina o nível de um jogador com base em suas vitórias e derrotas.

## Como Funciona

A função `CalculoDeNivel` recebe a quantidade de vitórias e derrotas como parâmetros e calcula o saldo de vitórias. Com base no saldo, determina o nível do jogador de acordo com as seguintes regras:

- Menos de 10 vitórias: Ferro
- 10 a 20 vitórias: Bronze
- 21 a 50 vitórias: Prata
- 51 a 80 vitórias: Ouro
- 81 a 90 vitórias: Diamante
- 91 a 100 vitórias: Lendário
- 101 ou mais vitórias: Imortal

## Como Usar

1. **Compilação:**
   - Compile o programa utilizando um compilador C. Por exemplo, você pode usar `gcc` no terminal:
     ```bash
     gcc seu_programa.c -o seu_programa
     ```

2. **Execução:**
   - Execute o programa:
     ```bash
     ./seu_programa
     ```

3. **Resultado:**
   - O programa imprimirá no console o saldo de vitórias e o nível do jogador com base nas regras estabelecidas.

## Exemplo

```c
#include <stdio.h>

char* CalculoDeNivel(int vitorias, int derrotas) {
    int saldoVitorias = vitorias - derrotas;
    char* nivel;

    // Condições para determinar o nível

    printf("O Herói tem um saldo de %d está no nível de %s\n", saldoVitorias, nivel);
    return nivel;
}

int main() {
    int vitorias = 100;
    int derrotas = 20;

    CalculoDeNivel(vitorias, derrotas);

    return 0;
}
