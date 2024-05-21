#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    
int idade; 

printf("Digite a sua idade: \n");
scanf("%i", &idade);


if (idade < 18 || idade > 65){
    printf("Voce nao e obrigado a votar!\n");

} else {
    printf("Voce e obrigado a votar! \n");
}

    return 0;
}