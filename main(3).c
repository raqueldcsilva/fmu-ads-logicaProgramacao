#include<stdio.h>

float cfab,cven;

int main(){
    
    printf("Digite o custo de fabrica do carro\n");
    scanf("%f",&cfab);cven=cfab+(cfab*0.28)+(cfab*0.45);
    
    printf("\nO preco de venda do carro e R$ %.2f\n",cven);
    
    return 0;
}