#include<stdio.h>
#include<locale.h>

float P1, P2, Li, med;
char name[30];

void nome();
void p1();
void p2();
void listas();
void media();

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    nome();
    p1();
    p2();
    listas();
    media();

    return 0;
}

void nome(){

    printf("Nome do aluno:");
    fgets(name, sizeof(name), stdin);

}

void p1(){

    printf("\nDigite a nota da p1:");
    scanf("%f", &P1);

}

void p2(){

    printf("\nDigite a nota da p2:");
    scanf("%f", &P2);

}

void listas(){

    printf("\nNota das Listas:");
    scanf("%f", &Li);

}

void media(){

    med=Li+P1*0.35+P2*0.4;

    printf("\n%s Média:%.2f", name, med);

    if(med<6){

        printf("\nMédia Insuficiente!");

        if(P1>P2){

            printf("\nMenor nota p2\nDigite a nota da Sub:");
            scanf("%f", &P2);

            med=Li+P1*0.35+P2*0.4;

            if(med<6){

                printf("\nMédia: %.2f Aluno Reprovado!", med);

            }else{

                printf("\nMédia: %.2f Aluno Aprovado!", med);
            }
        }else{

            printf("\nMenor nota p1\nDigite a nota da Sub:");
            scanf("%f", &P1);

            med=Li+P1*0.35+P2*0.4;

            if(med<6){

                printf("\nMédia: %.2f Aluno Reprovado!", med);

            }else{

                printf("\nMédia: %.2f Aluno Aprovado!", med);
            }
        }
    }else{

        printf("\nAluno Aprovado!");

    }
}