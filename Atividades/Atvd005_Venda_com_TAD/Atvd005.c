#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include"pagamento.h"
#include"retirada.h"
#include"resultado.h"

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    char nome[30], opcao, op2;
    float compra, desc, novo;

    printf("Nome do cliente:");
    fgets(nome, sizeof(nome), stdin);

    printf("\nInsira o valor da compra:");
    scanf("%f", &compra);
    getchar();

    opcao = pag();

    op2 = retirada();

    resultados(op2, desc, compra, opcao, novo, nome);

    return 0;

}