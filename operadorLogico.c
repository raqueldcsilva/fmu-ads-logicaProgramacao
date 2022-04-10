#include<stdio.h>

int n;

int main(){
    printf("Digite um numero\n");
    scanf("%d",&n);
    
    if(n>=5 && n<=100) {
        printf("\nO numero %d esta contido no intervalo\n",n);
        
    }else {
        printf("\nO numero %d nao esta contido no intervalo\n",n);
        
    }return 0;
}

