#include<stdio.h>
#include <locale.h>

float n1,n2;
char op;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o primeiro número da operação\n");
    scanf("%f",&n1);
    
    printf("\nDigite o operador: + - * /\n");
    scanf(" %c",&op);
    
    printf("\nDigite o segundo número da operação\n");
    scanf("%f",&n2);
    
    switch(op) {
        case'+': 
            printf("\nO resultado da soma e %.2f\n",n1+n2);
        break;
        
        case'-': 
            printf("\nO resultado da subtração e %.2f\n",n1-n2);
        break;
        
        case'*': 
            printf("\nO resultado da multiplicação e %.2f\n",n1*n2);
        break;
        
        case'/': 
            if(n2!=0) {
                printf("\nO resultado da divisão e %.2f\n",n1/n2);
            } else {
                printf("\nnao existe divisão por zero\n");
            }
        break;
        
        default: 
            printf("\nOperador invalido\n");
        
    }
    
    return 0;
}