#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int lugares, preferenciais;
float preco, minimo;

void dados();
void matriz(int onibus[][4], int LINHA, int COlUNA);
void exibe(int onibus[][4], int FILEIRA, int COLUNA);
void opcao(int FILEIRA, int COLUNA, int onibus[][4]);

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    int FILEIRA, i, j;
    const int COLUNA = 4;

    dados();
    FILEIRA = lugares/COLUNA;
    int onibus[FILEIRA][COLUNA];

    matriz(onibus, FILEIRA, COLUNA);


    printf("%d %d %f %f", lugares, preferenciais, preco, minimo);

    opcao(FILEIRA, COLUNA, onibus);

    return 0;

}

void dados(){

    printf("\nQuantidade total de lugares:");
    scanf("%d", &lugares);
    printf("\nAssentos preferênciais:");
    scanf("%d", &preferenciais);
    printf("\nValor da passagem:");
    scanf("%f", &preco);
    printf("\nValor mínimo vendido para partida:");
    scanf("%f", &minimo);

}

void matriz(int onibus[][4], int LINHA, int COLUNA){

    int i, j;

    for(i=0; i<LINHA; i++){
        for(j=0; j<COLUNA; j++){

            onibus[i][j]=0;

        }
    }
}

void exibe(int onibus[][4], int FILEIRA, int COLUNA){

    int i, j;

    printf("\n Assentos disponíveis");
    for(i=0; i<FILEIRA; i++){
        for(j=0; j<COLUNA; j++){

            printf("%d \t", onibus[i][j]);
        }
        printf("\n");
    }
}

void opcao(int FILEIRA, int COLUNA, int onibus[][4]){

    int esc_fileira, esc_coluna, opc, i, j, ocupados=0, disponiveis=0;
    float total=0, percentual;

    do{

        printf("\n1 - Comprar passagem\n2 - Ver lugares disponíveis\n3 - Status\n4 - Sair");
        scanf("%d", &opc);

    switch(opc){

        case 1:

            printf("\nSelecione a fileira de 1 a %d", FILEIRA);
            scanf("%d", &esc_fileira);
            printf("\nSelecione a poltrona de 1 a %d", COLUNA);
            scanf("%d", &esc_coluna);

            if(esc_fileira < 0 || esc_fileira >= FILEIRA || esc_coluna < 0 || esc_coluna >= COLUNA){

                    printf("Assento inválido!\n");
                }
                else if(onibus[esc_fileira-1][esc_coluna-1] == 0){
        
                    onibus[esc_fileira-1][esc_coluna-1] = 8;
                    total += preco;
                    ocupados++;
                    printf("Vendido!\n");
                }
                else{

                    printf("Assento já ocupado!\n");
                }

            break;

        case 2:

            printf("\nMapa de assentos 0 = disponível, 8 = ocupado\n");
            for(i = 0; i < FILEIRA; i++){
                for(j = 0; j < COLUNA; j++){

                    printf("%d\t", onibus[i][j]);

                }

                printf("\n");

            }

            break;

        case 3:

            disponiveis = lugares - ocupados;
            float percentual = (float)ocupados / lugares * 100;

            printf("\n=== ESTATÍSTICAS ===\n");
            printf("Número de lugares ocupados: %d\n", ocupados);
            printf("Número de lugares desocupados: %d\n", disponiveis);
            printf("Percentual de ocupação: %.1f%%\n", percentual);
            printf("Valor total vendido: R$ %.2f\n", total);

            if(total >= minimo){
                printf("Status: Ônibus pode partir!\n");
            }
            else{
                printf("Status: Valor mínimo não atingido\n");
            }
            break;

        case 4:

            printf("Saindo do sistema...\n");
            break;
            
        default:

            printf("\nOpção inválida!");
            break;
    }

    }while(opc != 4);
}