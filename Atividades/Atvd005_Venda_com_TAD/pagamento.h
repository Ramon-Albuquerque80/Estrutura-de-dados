#include<stdio.h>

char pag(){

    char opcao;

    printf("\nForma de pagamento\n");
    printf("D - Débito, C - Crédito, P - Pix: ");
    scanf("%c", &opcao);
    opcao = toupper(opcao);

    switch(opcao){

        case 'D':

            printf("\nDébito\n");
            break;

        case 'C':

            printf("\nCrédito\n");
            break;
        
        case 'P':

            printf("\nPix\n");
            break;

        default:

            printf("\nOpção inválida\n");
            break;
    }

    return opcao;
    
}