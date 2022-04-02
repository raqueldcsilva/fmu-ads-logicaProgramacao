#include<stdio.h>

float n1,n2,med;

int main(){
    //comandos de entrada
    printf("Digite a nota 1\n");
    scanf("%f",&n1);
    
    printf("Digite a nota 2\n");
    scanf("%f",&n2);med=(n1+n2)/2; 
    
    //calculo de media aritmetica
    if(med>=6) { 
        printf("\nAprovado com media %.2f\n",med);
    }
    else{
        printf("\nReprovado com media %.2f\n",med);
    }
    
    return 0;
    
}