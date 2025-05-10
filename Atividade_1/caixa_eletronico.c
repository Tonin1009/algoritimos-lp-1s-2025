#include <stdio.h>

int main (int argc, char* argv[]){

int opcao;
float saldo = 1518.00;
float valor;

    printf("\nBem-vindo(a) ao caixa eletronico!\n");
    printf("Escolha uma das opcao\n");
    printf("1 - Ver saldo\n");
    printf("2 - Sacar\n");
    printf("3 - Depositar\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Seu saldo é: R$ %.2f\n", saldo);
}
    else if(opcao == 2){
        printf("Digite o valor que deseja sacar: R$");
        scanf("%f", &valor);
        
        if(valor <= saldo){
            saldo -= valor;
            printf("Saque realizado com sucesso!\n");
            printf("Novo saldo: R$ %.2f\n", saldo);
    }    else{
            printf("Saldo insuficiente!\n");
    }
} 
    else if(opcao == 3){
        printf("Digite o valor que deseja depositar\n");
        scanf("%f", &valor);
            saldo += valor;
        printf("Valor depositado com sucesso!\n");
        printf("Novo saldo: R$ %.2f\n", saldo); 
}
    else{
        printf("Opcao invalida! Tente novamente.\n");
     }   
 
    return 0;
}