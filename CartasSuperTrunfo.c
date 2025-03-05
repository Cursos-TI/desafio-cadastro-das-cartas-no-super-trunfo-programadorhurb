#include <stdio.h>


int main(){

    char estado1[50], estado2[50];
    char nome1[50], nome2[50];
    float população1, população2;
    float area1, area2;
    int pontos1, pontos2;
    float pib1, pib2;

    printf(" *** NOVO PROJETO  *** \n");

    printf("Digite o nome do estado1: \n");
    scanf("%s",&estado1);

    printf("Digite o nome da cidade1: \n");
    scanf("%s",&nome1);

    printf("Digite sua população1: \n");
    scanf("%f",&população1);

    printf("Digite sua area1: \n");
    scanf("%s",&area1);

    printf("Digite seu pontos1: \n");
    scanf("%d",&pontos1);

    printf("Digite seu pib1: \n");
    scanf("%f",&pib1);

    printf("estado1: %s - nome1: %s - população1: %f", estado1, nome1, população1);
    printf("area1: %f - pontos1: %d - pib1: %s", area1, pontos1, pib1);

    
    printf("Digite o nome do estado2: \n");
    scanf("%s",&estado2);

    printf("Digite o nome da cidade2: \n");
    scanf("%s",&nome2);

    printf("Digite sua população2: \n");
    scanf("%f",&população2);

    printf("Digite sua area2: \n");
    scanf("%s",&area2);

    printf("Digite seu pontos2: \n");
    scanf("%d",&pontos2);

    printf("Digite seu pib2: \n");
    scanf("%f",&pib2);

    printf("estado2: %s - nome2: %s - população2: %f", estado2, nome2, população2);
    printf("area2: %f - pontos2: %d - pib2: %s", area2, pontos2, pib2);

   
    return 0;

}