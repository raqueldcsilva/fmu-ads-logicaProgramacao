#include<stdio.h>
#include <locale.h>

int n;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um número\n");
    scanf("%d",&n);
    
    switch(n) {
        case -10 ... 0:
            printf("\nNúmero está contido no intervalo entre -10 e 0\n");
        break;
        
        case 1 ... 11:
            printf("\nNúmero está contido no intervalo entre 1 e 11\n");
        break;
        
        case 12 ... 24:
            printf("\nNúmero está contido no intervalo entre 12 e 24\n");
        break;
        
        case 25:
            printf("\nNúmero é igual a 25\n");   
        break;
        
        default:
            printf("\nValor inválido\n");
        
    }//switch
    return 0;
}