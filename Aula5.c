#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1,n2,n3,media;


void main(int argc, char *argv[]){

setlocale(LC_ALL,"portuguese");//Fun��o para permitir os acentos
printf("       |--------------------------------------------------|  \n \n");
printf("       |                 Algoritimo M�dia                 |  \n \n");
printf("       |--------------------------------------------------|  \n \n");

system("pause");
printf("==========> Cadastrando Notas <========== \n \n");
printf("Digite a primeira nota: ");
scanf("%f", &n1);
printf("Digite a segunda nota: ");
scanf("%f", &n2);
printf("Digite a terceira nota: ");
scanf("%f", &n3);
media = (n1+n2+n3)/3;

printf("Sua M�dia �: %.2f ", media);

if(media >6){
   printf("\n --------------------------------------------------\n");
   printf("Situa��o: Aprovado(a)! :)");
   printf("\n --------------------------------------------------\n");

}else{

  printf("\n --------------------------------------------------\n");
   printf("Situa��o: Reprovado(a)! :(");
   printf("\n --------------------------------------------------\n");

}





}
