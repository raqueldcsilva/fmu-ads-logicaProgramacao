#include<stdio.h>

float n1,n2,med;

int main(){
    //comandos de entrada
    printf("Digite a nota 1\n");
    scanf("%f",&n1);printf("Digite a nota 2\n");
    
    scanf("%f",&n2);
    med=(n1+n2)/2;
    
    //comando de saida
    printf("\nA media do aluno e %.2f\n",med);
    
    return 0;
}