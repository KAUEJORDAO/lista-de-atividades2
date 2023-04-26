#include <stdio.h>

int main(void) {
    float nota, soma = 0, media;

    printf("Digite as quatro notas do aluno:\n");

    for (int i = 1; i <= 4; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / 4.0;

    printf("A media do aluno foi: %.2f\n", media);

    if (media >= 0 && media <= 3) {
        printf("Reprovado.\n");
    } else if (media >= 3.1 && media <= 6.9) {
        printf("Recuperacao.\n");
    } else {
        printf("Aprovado.\n");
    }

    return 0;
}
