#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float peso, altura, imc;


int main(int argc, char *argv[]){

setlocale(LC_ALL,"portuguese");//Fun��o para permitir os acentos
printf("       |--------------------------------------------------|  \n \n");
printf("       |                      IMC                         |\n \n");
printf("       |--------------------------------------------------|  \n \n");

system("pause");
printf("==========> Cadastrando Notas <========== \n \n");
printf("Digite seu peso em(Kg): ");
scanf("%f", &peso);
printf("Digite sua Altura em(Cm): ");
scanf("%f", &altura);

imc = peso / (altura*2);

printf("Seu IMC �: %.4f", imc);

if(imc < 18.5){
   printf("\n --------------------------------------------------\n");
   printf("Situa��o: Abaixo do Peso!");
   printf("\n --------------------------------------------------\n");

}else if(imc >=18.5 && imc <=24.9){

  printf("\n --------------------------------------------------\n");
  printf("Situa��o: Peso Normal!");
  printf("\n --------------------------------------------------\n");

}
}else if(imc >=18.5 && imc <=24.9){

  printf("\n --------------------------------------------------\n");
  printf("Situa��o: Peso Normal!");
  printf("\n --------------------------------------------------\n");

}



return 0;

}
