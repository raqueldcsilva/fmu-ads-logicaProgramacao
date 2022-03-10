#include<stdio.h>

int numero;
float altura;

int main(){
    //comando de entrada
    printf("Digite um número: \n");
    scanf("%d",&numero);//receber dado e armazenar na RAM
    printf("Digite sua altura: \n");
    scanf("%f",&altura);
    
    //comando de saída
    printf("\nO número que o usuário digitou é %d \n", numero);
    printf("\nA altura do usuário é %.2f \n", altura);

    
    return 0;
}
