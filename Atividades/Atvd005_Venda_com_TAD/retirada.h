#include<stdio.h>

char retirada(){

    char opc;

    printf("\nForma de retirada\n");
    printf("L - Retirada no local, R - Entrega na residência: ");
    getchar();
    scanf("%c", &opc);
    opc = toupper(opc);
    getchar();

    switch(opc){

        case 'L':

            printf("\nRetirada no local\n");
            break;

        case 'R':

            printf("\nEntrega na residência\n");
            break;

        default:

            printf("\nOpção inválida\n");
            break;

    }

    return opc;
}


