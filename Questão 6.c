#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
char nome[50]; 
int idade; 

printf("Digite o seu nome: \n");
scanf("%s", &nome);

printf("Digite a sua idade: \n");
scanf("%i", &idade);


if (idade < 18 || idade > 65){
    printf("Voce nao e obrigado a votar!\n");

} else {
    printf("Voce e obrigado a votar! \n");
}

    return 0;
}