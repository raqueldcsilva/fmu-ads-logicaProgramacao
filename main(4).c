#include<stdio.h>
#include<math.h> //biblioteca com funções matemáticas

float n,qua,cubo,raiz,raizc,r;

int main(){
    //comando de entrada
    printf("Digite um numero\n");
    scanf("%f",&n);
    
    qua=pow(n,2); //calcula o n ao quadrado
    cubo=pow(n,3); //calcula o n ao cubo
    raiz=sqrt(n); //calcula a raiz quadrada
    raizc=cbrt(n); //calcula a raiz cubica
    r=pow(n,1.0/3.0); //calcula a raiz cubica
    
    //comando de saida
    printf("\nO numero %.2f ao quadrado e %.2f\n",n,qua);
    printf("\nO numero %.2f ao cubo e %.2f\n",n,cubo);
    printf("\nA raiz quadrada do numero %.2f e %.2f\n",n,raiz);
    printf("\nA raiz cubica do numero %.2f e %.2f\n",n,raizc);
    printf("\nA raiz cubica do numero %.2f e %.2f\n",n,r);
    
    return 0;
    
}