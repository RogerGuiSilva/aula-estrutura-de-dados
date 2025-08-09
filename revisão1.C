#include <stdio.h>

int main() {
    float m;
    int i;
    int c1 = 0, c2 = 0, c3 = 0;

    for(i = 0; i < 5; i++) {
        do {
            printf("Digite a media: ");
            scanf("%f", &m);
        } while(m < 0 || m > 10);

        if(m >= 6) {
            c1++;
        } else if(m >= 4) {
            c2++;
        } else {
            c3++;
        }
    }

    printf("Maiores ou iguais a 6: %d\n", c1);
    printf("Entre 4 e 6: %d\n", c2);
    printf("Menores que 4: %d\n", c3);

    return 0;
}

