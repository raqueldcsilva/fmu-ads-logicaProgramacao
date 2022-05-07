#include<stdio.h>
#include<ctype.h>
#include <locale.h>

char letra;

int main() { 
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite uma letra minúscula\n");
    scanf(" %c",&letra);
    
    letra=tolower(letra); //letra em minusculo
    
    if(isalpha(letra)) { //verifica se a letra pertence ao alfabeto
    
        switch(letra){
            case 'a':
                case 'e':
                    case 'i':
                        case 'o':
                            case 'u':
                                printf("\nA letra %c é uma vogal\n",letra);
            break;
            
            default:
                printf("\nA letra %c é uma consoante\n",letra);
            
        }
    }
    else{
        printf("\nNão é uma letra\n");
    }
    return 0;
}