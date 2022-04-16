#include<stdio.h>

float a, b, c;

int main() {
    //comandos de entrada
    printf("Digite os lados do triangulo\n");
    scanf("%f %f %f",&a,&b,&c);
    
    if(a + b > c && b + c > a && a + c > b){ //para verificar se e um triangulo
        if(a==b && b==c){
            printf("\nTriangulo equilatero\n");
        }else if(a==b || b==c ||a==c) { 
            printf("\nTriangulo isoceles\n");
        }else{
            printf("\nTriangulo escaleno\n");
        }
    }//if
    else {
        printf("\nNao e um triangulo\n");
    }return 0;
}
