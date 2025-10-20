#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    int FILEIRA, COLUNA = 4;
    int lugares, preferenciais, i, j, opcao;
    float preco, minimo, total_vendido = 0;
    int fileira_escolhida, poltrona_escolhida;
    int ocupados = 0, disponiveis = 0;

    // Entrada de dados iniciais
    printf("Quantidade total de lugares:");
    scanf("%d", &lugares);

    printf("Quantidade de assentos preferênciais:");
    scanf("%d", &preferenciais);

    printf("Valor de cada passagem:");
    scanf("%f", &preco);

    printf("Valor mínimo vendido para partida:");
    scanf("%f", &minimo);

    // Calcula número de fileiras
    FILEIRA = lugares / COLUNA;
    if (lugares % COLUNA != 0) {
        FILEIRA++;
    }

    // Declara matriz do ônibus
    int onibus[FILEIRA][COLUNA];

    // Inicializa matriz com 0 (disponível)
    for(i = 0; i < FILEIRA; i++){
        for(j = 0; j < COLUNA; j++){
            onibus[i][j] = 0;
        }
    }

    // Sistema de vendas
    do {
        printf("\n=== SISTEMA DE VENDAS ===\n");
        printf("1 - Comprar passagem\n");
        printf("2 - Ver mapa de assentos\n");
        printf("3 - Estatísticas\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: // Comprar passagem
                printf("\nFileira (1 a %d): ", FILEIRA);
                scanf("%d", &fileira_escolhida);
                printf("Poltrona (1 a 4): ");
                scanf("%d", &poltrona_escolhida);

                // Ajusta para índices da matriz (0-based)
                fileira_escolhida--;
                poltrona_escolhida--;

                // Verifica se é válido
                if(fileira_escolhida < 0 || fileira_escolhida >= FILEIRA || 
                   poltrona_escolhida < 0 || poltrona_escolhida >= COLUNA){
                    printf("Assento inválido!\n");
                }
                else if(onibus[fileira_escolhida][poltrona_escolhida] == 0){
                    // Venda efetuada
                    onibus[fileira_escolhida][poltrona_escolhida] = 8;
                    total_vendido += preco;
                    ocupados++;
                    printf("Venda realizada com sucesso!\n");
                }
                else{
                    printf("Assento já ocupado!\n");
                }
                break;

            case 2: // Ver mapa
                printf("\nMapa de assentos (0 = disponível, 8 = ocupado):\n");
                for(i = 0; i < FILEIRA; i++){
                    for(j = 0; j < COLUNA; j++){
                        printf("%d\t", onibus[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: // Estatísticas
                disponiveis = lugares - ocupados;
                float percentual = (float)ocupados / lugares * 100;

                printf("\n=== ESTATÍSTICAS ===\n");
                printf("Número de lugares ocupados: %d\n", ocupados);
                printf("Número de lugares desocupados: %d\n", disponiveis);
                printf("Percentual de ocupação: %.1f%%\n", percentual);
                printf("Valor total vendido: R$ %.2f\n", total_vendido);
                
                if(total_vendido >= minimo){
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
                printf("Opção inválida!\n");
        }

    } while(opcao != 4);

    return 0;
}