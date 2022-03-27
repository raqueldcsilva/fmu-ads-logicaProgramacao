#include<stdio.h>

int n;

int main(){ 
    //inicio
    //comando de entrada
    printf("Digite um numero\n");
    scanf("%d",&n);
    
    //condicao composta (2 possíveis respostas)
    if(n>10) {
        printf("\nO numero %d e maior do que 10\n",n);
        
    }//fim if
    else {
        printf("\nO numero %d e menor do que 10\n",n);
    } //fim else
    
    return 0;
    
} //fim do programa