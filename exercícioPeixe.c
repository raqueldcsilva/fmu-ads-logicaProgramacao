#include<stdio.h>
float peso,excesso,multa;

int main(){
    printf("Qual o peso dos peixes?\n");
    scanf("%f",&peso);
    
    printf("\nPeso dos peixes %.2f Kg\n",peso);
    
    if(peso>50){
        excesso=peso-50;
        multa=excesso*4.00;
        
        printf("\nExcesso de peixes %.2f Kg\n",excesso);
        printf("\nValor da multa R$ %.2f\n",multa);
        
    }
    return 0;
}
