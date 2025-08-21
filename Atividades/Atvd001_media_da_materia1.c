#include<stdio.h>
#include<locale.h>

char nome[30];
float p1, p2, lista, media;

int main(){

    printf("Nome do aluno:");
    fgets(nome, sizeof(nome), stdin);

    printf("\nNota da P1:");
    scanf("%f", &p1);
    printf("\nNota da P2:");
    scanf("%f", &p2);
    printf("\nNota das listas:");
    scanf("%f", &lista);

    media=lista+p1*0.35+p2*0.4;
    
    if(media>=6){
        printf("\nMédia %.2f. %s aprovado!", media, nome);
    }else{
        
        if(p1>p2){

            printf("\nMédia %.2f insuficiente!", media);
            printf("\nMenor nota: P2");
            printf("\nDigite a nota da sub:");
            scanf("%f", &p2);

            media=lista+p1*0.35+p2*0.4;

            if(media>=6){
                printf("\nMédia recalculada %.2f. %s aprovado!", media, nome);
            }else{
                printf("\nMédia recalculada %.2f. %s Reprovado!", media, nome);
            }

        }else{

            printf("\nMédia %.2f insuficiente!", media);
            printf("\nMenor nota: P1");
            printf("\nDigite a nota da sub:");
            scanf("%f", &p1);

            media=lista+p1*0.35+p2*0.4;

            if(media>=6){
                printf("\nMédia recalculada %.2f. %s aprovado!", media, nome);
            }else{
                printf("\nMédia recalculada %.2f. %s Reprovado!", media, nome);
            }
        }
    }

    return 0;
}