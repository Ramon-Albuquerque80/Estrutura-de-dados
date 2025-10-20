#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int vetor[128], matriz[2][2][2][2][2][2][2];

int mat();
int vet();
void exibe(int vetor[]);

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.utf8");

    mat();
    vet();
    exibe(vetor);
}

int mat(){

    int D1, D2, D3, D4, D5, D6, D7, total=0;

    for(D1 = 0; D1<2; D1++){

        for(D2 = 0; D2<2; D2++){

            for(D3 = 0; D3<2; D3++){

                for(D4 = 0; D4<2; D4++){

                    for(D5 = 0; D5<2; D5++){

                        for(D6 = 0; D6<2; D6++){

                            for(D7 = 0; D7<2; D7++){

                                matriz[D1][D2][D3][D4][D5][D6][D7] = total + D1 + D2 + D3 + D4 + D5 + D6 + D7;
                                //printf("%d \t", matriz[D1][D2][D3][D4][D5][D6][D7]);
                            }
                        }
                    }
                }
            }
        }
    }

    return matriz[D1][D2][D3][D4][D5][D6][D7];
}

int vet(){

    int D1, D2, D3, D4, D5, D6, D7, i=0;
    for(D1 = 0; D1<2; D1++){
        for(D2 = 0; D2<2; D2++){

            for(D3 = 0; D3<2; D3++){

                for(D4 = 0; D4<2; D4++){

                    for(D5 = 0; D5<2; D5++){

                        for(D6 = 0; D6<2; D6++){

                            for(D7 = 0; D7<2; D7++){

                                vetor[i] = matriz[D1][D2][D3][D4][D5][D6][D7];
                                i++;
                            }
                        }
                    }
                }
            }
        }
    }

    return vetor[i];
}

void exibe(int vetor[]){

    int i=0;

    for(i=0; i<128; i++){

        printf("%d\n", vetor[i]);
    }
}