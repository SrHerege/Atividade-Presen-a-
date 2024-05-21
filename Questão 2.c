#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
char nome[10];
int idade;
int notaUm, notaDois, notaTres;
float media; 


printf("Digite seu nome: \n");
scanf("%s", &nome);

printf("Digite sua idade: \n");
scanf("%i", &idade);

printf("Digite a primeira nota: \n");
scanf("%i", &notaUm);

printf("Digite a segunda nota: \n");
scanf("%i", &notaDois);

printf("Digite a terceira nota: \n");
scanf("%i", &notaTres);

media = (notaUm + notaDois + notaTres) / 3; 

if (media < 7){
    printf("O aluno esta reprovado! \n");
} else {
    printf("O aluno esta aprovado! \n");
}

printf("Nome do aluno: %s\n", nome);
printf("Idade do aluno: %i\n", idade);
printf("Media do aluno: %2.f\n", media);


    return 0;
}