#include<stdio.h>

float valor;

int main(){
    printf("Digite o valor da compra\n");
    scanf("%f",&valor);
    
    if(valor>0){
        if(valor<=100){
            //total=valor-(valor*0.10);
            printf("\nO valor total da compra e R$ %.2f\n",valor*0.95);
            
        } else {
            printf("\nO valor total da compra e R$ %.2f\n",valor*0.90);
            
        }
        
    }
    else {
        printf("\nEntrada Invalida\n");
    }return 0;
}
