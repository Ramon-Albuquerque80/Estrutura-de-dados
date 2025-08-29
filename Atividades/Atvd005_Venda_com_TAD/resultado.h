#include<stdio.h>

void resultados(char s1, float desc, float compra, char p1, float novo, char nome[]){

        if(s1 == 'R'){

        desc = compra+(compra*0.05);

        if(p1 == 'D'){

            novo = desc-(desc*0.03);

            printf("\nNome: %s \nValor sem desconto: R$%.2f \nForma de pagamento: Débito \nForma de retirada: Entrega \nValor com forma de retirada: R$%.2f \nValor final com desconto: R$%.2f", nome, compra,desc, novo);

        }else if(p1 == 'P'){

            novo = desc-(desc*0.1);

            printf("\nNome: %s \nValor sem desconto: R$%.2f \nForma de pagamento: Pix \nForma de retirada: Entrega \nValor com forma de retirada: R$%.2f \nValor final com desconto: R$%.2f", nome, compra,desc, novo);
        }
    }else if(s1 == 'L'){

        desc = compra;

        if(p1 == 'D'){

            novo = desc-(desc*0.03);

            printf("\nNome: %s \nValor sem desconto: R$%.2f \nForma de pagamento: Débito \nForma de retirada: Retirada \nValor com forma de retirada: R$%.2f \nValor final com desconto: R$%.2f", nome, compra,desc, novo);

        }else if(p1 == 'P'){

            novo = desc-(desc*0.1);

            printf("\nNome: %s \nValor sem desconto: R$%.2f \nForma de pagamento: Pix \nForma de retirada: Retirada \nValor com forma de retirada: R$%.2f \nValor final com desconto: R$%.2f", nome, compra,desc, novo);

        }
    }else{

        printf("\nOpção inválida");

    }
}