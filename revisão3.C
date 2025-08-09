#include <stdio.h>

int main() {
    float v = 0, a = 0;
    float x, y;
    int i;

    for(i = 0; i < 8; i++) {
        do {
            printf("Vitor: ");
            scanf("%f", &x);
            printf("Arleti: ");
            scanf("%f", &y);
        } while(x < y);

        v += x;
        a += y;
    }

    printf("Total Vitor: %.2f\n", v);
    printf("Total Arleti: %.2f\n", a);

    if(v > a) {
        printf("Vitor guardou mais\n");
    } else if(a > v) {
        printf("Arleti guardou mais\n");
    } else {
        printf("Empate\n");
    }

    if(v >= 6500) {
        printf("Vitor consegue pintar\n");
    } else {
        printf("Vitor nao consegue pintar\n");
    }

    if(a >= 7600) {
        printf("Arleti consegue reforcar\n");
    } else {
        printf("Arleti nao consegue reforcar\n");
    }

    if(v < 6500 && a < 7600) {
        float fv = 6500 - v;
        float fa = 7600 - a;

        if(fv < fa) {
            printf("Vitor chegou mais perto, falta %.2f\n", fv);
            printf("Para Arleti falta %.2f\n", fa);
        } else if(fa < fv) {
            printf("Arleti chegou mais perto, falta %.2f\n", fa);
            printf("Para Vitor falta %.2f\n", fv);
        } else {
            printf("Os dois estao iguais, falta %.2f\n", fv);
        }
    }

    return 0;
}

