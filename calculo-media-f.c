#include <stdio.h>

int main() {
    int NmrFamiliares;
    int idade;
    int contador = 1;
    int idadetotal = 0;

    printf("Colocar numero de familiares ");
    scanf("%d", &NmrFamiliares);

    while (contador <= NmrFamiliares) {
        printf("Colocar as idades do familiar ");
        scanf("%d", &idade);
        contador = contador + 1;
        idadetotal = idadetotal + idade;
    }

    float media = (float)idadetotal / NmrFamiliares;
    printf("A media familiar é de media %.2f", media);

    return 0;
}
