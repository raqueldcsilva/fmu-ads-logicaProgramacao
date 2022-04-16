#include<stdio.h>

float n1,n2,med;

int main(){
    //comandos de entrada
    printf("Digite as notas\n");
    scanf("%f%f",&n1,&n2);
    
    if(n1>=0 && n1<=10 && n2>=0 && n2<=10) { // verifica se n1 e n2 são válidas
    
        med=(n1+n2)/2;
        
        if(med >= 7) {
            printf("\nAprovado com media %.2f\n",med);
        } else if(med>=3 && med<7) {
            printf("\nExame com media %.2f\n",med);
        } else {
            printf("\nReprovado com media %.2f\n",med);
        }
        
    }//if
    else{
        printf("\nNota invalida\n");
    }
    return 0;
}