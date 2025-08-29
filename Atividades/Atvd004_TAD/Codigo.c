#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"Soma.h"
#include"Subtracao.h"
#include"Multiplicacao.h"
#include"Divisao.h"
#include"Cubo.h"

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    float num, res;

    printf("\nDigite um número:");
    scanf("%f", &num);

    res=soma(num);
    res=sub(res);
    res=mult(res);
    res=divisao(res);
    res=exp(res);

}