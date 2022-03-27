#include<stdio.h>

int idade;
float alt;
char genero,nome[40],apelido[20];

int main(){
    //comandos de entrada
    printf("Digite sua idade\n");
    scanf("%d",&idade);
    
    printf("Digite sua altura\n");
    scanf("%f",&alt);
    
    printf("Digite seu genero\n");
    scanf(" %c",&genero); //armazena 1 letra
    
    printf("Digite seu nome\n");
    scanf(" %[^\n]",&nome); //armazena 1 frase
    
    printf("Digite seu apelido com apenas uma palavra\n");
    scanf("%s",&apelido); //armazena 1 palavra
    
    //comando de saida
    printf("\nNome %s, apelido %s, genero %c\n",nome,apelido,genero);
    printf("\nAltura %.2f,idade %d\n",alt,idade);
    
    return 0;
}