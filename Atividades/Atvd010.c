#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//EXATAMENTE COMO FIZ NO PAPEL

char placa[7][3];

char insere();
void verifica(char placa[7][3]);

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    insere();
    verifica(placa);

    return 0;
}

char insere(){

    for(int i = 0; i<3; i++){

        printf("Digite a placa:");
        fgets(placa[i], sizeof(placa), stdin);

    }
}

void verifica(char placa[7][3]){

    for(int j = 0; j<3; j++){

        for(int i = 0; i<3; i++){

            if(placa[i]=='A' || placa[i]=='B' || placa[i]=='C' || placa[i]=='D' || placa[i]=='E' || placa[i]=='F'){

                printf("\nNERD");

            }else{

                printf("\nNORMAL");
                break;
            }
        }
    }
}