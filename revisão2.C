#include <stdio.h>

int main() {
    int n[20];
    int i, maior, cont = 0;

    for(i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }

    maior = n[0];
    for(i = 1; i < 20; i++) {
        if(n[i] > maior) {
            maior = n[i];
        }
    }

    for(i = 0; i < 20; i++) {
        if(n[i] == maior) {
            cont++;
        }
    }

    printf("Maior: %d, repetiu %d vezes\n", maior, cont);

    return 0;
}

