#include <stdio.h>

int main (int argc, char* argv[]){

    int operacao, n1, n2;

    printf("Bem vindo(a) a calculadora\n");
      
    printf("Digite a operacao que deseja fazer: \n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - divisao\n");
    scanf("%d", &operacao);

    if(operacao == 1){
    printf("Digite o n1: \n");
        scanf("%d", &n1);
    printf("Digite o n2: \n"); 
        scanf("%d", &n2);
    int resultado_adicao = n1 + n2;
    printf("Resultado: %d", resultado_adicao);   
    }
     if(operacao == 2){
    printf("Digite o n1: \n"); 
        scanf("%d", &n1);
    printf("digite o n2: \n");    
        scanf("%d", &n2);
    int resultado_subtracao = n1 - n2;
    printf("Resultado: %d", resultado_subtracao);    


     }

    return 0;

}
