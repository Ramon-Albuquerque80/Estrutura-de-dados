#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void fatorial(int i, int num);
void recursividade(int i, int fator, int num);

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    int num, fator=1, i;

    printf("Digite um número:");
    scanf("%d", &num);
    i=num;

    printf("\nFunção normal:");
    fatorial(i, num);
    printf("\n--------------------\n");
    printf("\nCom recursividade:");
    recursividade(i, fator, num);

    return 0;

}

void recursividade(int i, int fator, int num){

    if(i>1){

        fator*=i;


        printf("\n%d!: %d", num, fator);

        i-=1;
       
        recursividade(i, fator, num);
    }

    printf("\n");
    printf("\n%d", fator);

}

void fatorial(int i, int num){

    int fat = 1;

   while(i>1){

    fat*=i;

    printf("\n%d!: %d", num, fat);

    i--;

   }

}