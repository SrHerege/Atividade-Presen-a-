#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

int num; 

printf("Digite um numero inteiro: \n");
scanf("%i", &num);

if (num > 10){
    printf("O numero inserido é maior que 10! ");
} else {
    printf("O numero inserido não é maior que 10!");
}

    return 0;
}