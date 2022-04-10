#include<stdio.h>
#include<locale.h>

int id, temp;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //comandos de entrada
    printf("Digite sua idade\n");
    scanf("%d",&id);
    
    printf("Digite seu tempo trabalhado\n");
    scanf("%d",&temp);
    
    if(id>=65 || temp>=30 ||(id>=60 && temp>=25)){
        printf("\nIdade: %d Tempo trabalhado %d - Requer aposentadoria\n",id,temp);
        
    }else{
        printf("\nIdade: %d Tempo trabalhado %d - Não requer aposentadoria\n",id,temp);
    }return 0;
}
