#include <stdio.h>
int main() {
    
char* CalculoDeNivel( int vitorias,int derrotas) {
    int saldoVitorias = vitorias - derrotas;
    char* nivel;

    if (vitorias < 10) {
        nivel = "Ferro";
    } else if (saldoVitorias >= 10 && saldoVitorias <= 20) {
        nivel = "Bronze";
    } else if (saldoVitorias >= 21 && saldoVitorias <= 50) {
        nivel = "Prata";
    } else if (saldoVitorias >= 51 && saldoVitorias <= 80) {
        nivel = "Ouro";
    } else if (saldoVitorias >= 81 && saldoVitorias <= 90) {
        nivel = "Diamante";
    } else if (saldoVitorias >= 91 && saldoVitorias <= 100) {
        nivel = "Lendário";
    } else if (saldoVitorias >=101){
        nivel = "Imortal";
    }

    printf("O Herói tem um saldo de %d está no nível de %s\n", saldoVitorias, nivel);
    return nivel;
}


int vitorias = 100;
int derrotas = 20;

 CalculoDeNivel(vitorias, derrotas);
}
