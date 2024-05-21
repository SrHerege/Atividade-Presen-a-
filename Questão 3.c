#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

int numUm, numDois; 
int soma; 
float produto, media;
int maior, menor; 

printf("Digite o primeiro numero: \n");
scanf("%i", &numUm);
printf("Digite o segundo numero: \n");
scanf("%i", &numDois);


media = (numUm + numDois) / 2;

soma = numUm + numDois; 

produto = numUm * numDois; 

menor = numUm; // decreto qual o menor numero, if o numero dois for menor obtenho o resultado
  if (numDois < numUm) {
    menor = numDois;
  }

maior = numUm; // decreto o maior numero, if numro dois for menor, obtenho o resultado tambem
  if (numDois > numUm) {
    maior = numDois;
  }
printf("Média: %.2f\n", media); 
printf("Soma: %d\n", soma);
printf("Produto: %.2f\n", produto);
printf("Menor valor: %d\n", menor);
printf("maior valor: %d\n", maior);

    return 0;
}