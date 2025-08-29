#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#pragma region declaração de funções

float soma(float num);
float sub(float res);
float mult(float res);
float divisao(float res);
float exp(float res);

#pragma endregion

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    float num, res;

    printf("Digite um número:");
    scanf("%f", &num);
    
    res=soma(num);
    res=sub(res);
    res=mult(res);
    res=divisao(res);
    res=exp(res);

	return 0;
    
}

float soma(float num){
	
	float total;
	
	total = num + 25;

	printf("\nResultado da primeira etapa: %.2f", total);
	
	return total;
	
}

float sub(float res){
	
	float subt;
	
	subt=res-10;
	
	printf("\nResultado da segunda etapa: %.2f", subt);

	return subt;
}

float mult(float res){
	
	float total;
	
	total = res * 3;
	
	    printf("\nResultado da terceira etapa: %.2f", total);

	return total;
}

float divisao(float res){
	
	float divi;
	
	divi = res / 2;

	printf("\nResultado da quarta etapa: %.2f", divi);
	
	return divi;
}

float exp(float res){
	
	float cubo;
	
	cubo = res*res*res;

	printf("\nResultado da ultima etapa: %.2f", cubo);
	
	return cubo;
}
