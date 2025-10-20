#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    char frase[40], alterada[40], fatec[6]="FATEC ", itape[6]=" ITAPE";
    int qtd=0, i, vogal=0, consoante=0, palavras=0;

    printf("\nDigite uma frase:");
    
    strupr(fgets(frase, sizeof(frase), stdin));
    frase[strcspn(frase, "\n")]='\0';

    system("pause");
    system("cls");

    qtd = strlen(frase);
    printf("\nQuantidade de caracteres: %d\n", qtd);

    system("pause");
    system("cls");

    for(i=0; i<qtd; i++){

        if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){

            vogal++;

        }else if(frase[i] != ' '){

            consoante++;

        }
    }

    printf("\nQuantidade de vogais: %d\n", vogal);
    printf("\nQuantidade de consoantes: %d\n", consoante);

    system("pause");
    system("cls");

    for(i=0; i<=qtd; i++){

        if(frase[i] == '\0' || frase[i] == ' '){

            palavras++;

        }
        alterada[i]=frase[i];
    }

    printf("\nQuantidade de palavras: %d\n", palavras);

    system("pause");
    system("cls");

    for(i=0; i<qtd; i++){

        if(alterada[i] == 'A'){

            alterada[i]='Z';
        }
    }

    printf("\nA substituido por Z: %s\n", alterada);

    system("pause");
    system("cls");

    strncat(fatec, alterada, 6);
    //strcat(alterada, itape);

    printf("\nFatec adicionado: %s", fatec);
    printf("\nItape adicionado: %s", alterada);

}