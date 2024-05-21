#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
char loginCorreto[50] = "admin";
char senhaCorreta[50] = "admin";   
char login[50];
char senha[50];

printf("~~~~ BEM VINDO A TELA DE LOGIN ~~~~\n");

printf("Digite seu login: \n");
scanf("%s", &login);
printf("Digite sua senha: \n");
scanf("%s", &senha);

if (strcmp (login, loginCorreto) == 0 && strcmp (senha, senhaCorreta) == 0){
    printf("Bem vindo! \n");
} else {
    printf("Senha ou login invalidos! \n"); 
}



    return 0;
}