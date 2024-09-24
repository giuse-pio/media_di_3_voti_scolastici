#include<stdio.h>

int main() {
    float a, b, c, media;
    printf("inserisci il primo voto: ");
    scanf("%f", &a);
    printf("inserisci il secondo voto: ");
    scanf("%f", &b);
    printf("inserisci il terzo voto: ");
    scanf("%f", &c);
    media = (a + b +c )/3;
    printf("media = %.2f", media);
}
