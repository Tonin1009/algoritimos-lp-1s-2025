#include <stdio.h>

int main (int argc, char* argv[]){

    int operacao, n1, n2;
    do{
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
    printf("Digite o n2: \n");    
        scanf("%d", &n2);
    int resultado_subtracao = n1 - n2;
    printf("Resultado: %d", resultado_subtracao);    
}
    
    if(operacao == 3){
    printf("Digite o n1: \n");
        scanf("%d", &n1);
    printf("Digite o n2: \n");
        scanf("%d", &n2);
    int resultado_multiplicacao = n1 * n2;
    printf("Resultado: %d", resultado_multiplicacao);
}

    if(operacao == 4){
    printf("Digite o n1: \n");    
        scanf("%d", &n1);
    printf("Digite o n2: \n");
        scanf("%d", &n2);
    int resultado_divisao = n1 / n2;
    printf("Resultado: %d\n",resultado_divisao);
    }

    printf("\nDeseja fazer outra operacao?\n1 - Sim\n2 - Nao\n");
        scanf("%d", &operacao);

    }while(operacao == 1);

    return 0;

}
