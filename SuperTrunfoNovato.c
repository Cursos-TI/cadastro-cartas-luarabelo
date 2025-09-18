#include <stdio.h>

int main(){
    char estado1, estado2;
    char cod1[4], cod2[4], cidade1[50], cidade2[50]; 
    int  pop1, pop2, turismo1, turismo2;
    double area1, area2, pib1, pib2;

    //cadastro de cartas
    printf("  Bem-vindo ao Super Trunfo - Nivel Novato!"); //cabecalho inicial
    printf("\n"); 
printf("====================================================\n"); 
    printf("Para cadastrar a Carta 1, digite as seguintes informações:\n"); //cabecalho para introducao de dados
    printf("\n") ;
    
        printf("Estado (use somente uma letra de 'A' a 'H'): \n");
        scanf(" %c", &estado1);

        printf("Codigo (uma letra e dois numeros, ex: A01): \n");
        scanf("%s", cod1);

        printf("Nome da cidade: \n");
        scanf("%s", cidade1);

        printf("Numero de Habitantes: \n");
        scanf("%d", &pop1);

        printf("Area (em km²): \n");
        scanf("%lf", &area1);

        printf("PIB da cidade: \n");
        scanf("%lf", &pib1);

        printf("Numero de pontos turisticos: \n");
        scanf("%d", &turismo1);

    printf("\n"); //espaco dentre entradas

    printf("Para cadastrar a Carta 2, digite as seguintes informações:\n"); //cabecalho para introducao de dados
    printf("\n"); //espacamento
        printf("Estado (use somente uma letra de 'A' a 'H'): \n");
        scanf(" %c", &estado2); //espaco antes do formato evita leitura de enter como caracter

        printf("Codigo (uma letra e dois numeros ex: B02): \n");
        scanf("%s", cod2);

        printf("Nome da cidade: \n");
        scanf("%s", cidade2); //strings nao necessitam de & para enderacamento

        printf("Numero de Habitantes: \n");
        scanf("%d", &pop2);

        printf("Area (em km²): \n");
        scanf("%lf", &area2);

        printf("PIB da cidade: \n");
        scanf("%lf", &pib2);

        printf("Numero de pontos turisticos: \n");
        scanf("%d", &turismo2);
    

    //exibicao das cartas
    printf("\n\n"); //espaco entre entradas e saidas
    printf("======Cadastro da Carta 1=======\n"); //breve cabecalho
    printf("Estado:%c\n", estado1);
    printf("Codigo:%s\n", cod1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%d\n", pop1);
    printf("Área:%.2lf km²\n", area1);
    printf("PIB:%.2lf bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turismo1);

    printf("\n"); //espaco entre saidas
    printf("======Cadastro da Carta 2=======\n"); //breve cabecalho
    printf("Estado:%c\n", estado2);
    printf("Codigo:%s\n", cod2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%d\n", pop2);
    printf("Área:%.2lf km²\n", area2);
    printf("PIB:%.2lf bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turismo2);

    return 0; 
}