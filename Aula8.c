#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opcao;
float n1,n2;


void main(int argc, char *argv[]){

setlocale(LC_ALL,"portuguese");//Fun��o para permitir os acentos
printf("       |--------------------------------------------------|  \n \n");
printf("       |                    Calculadora(+ - � x)          |  \n \n");
printf("       |--------------------------------------------------|  \n \n");

system("pause");
do {
system("cls");
printf("\n =====> Escolha uma Opera��o <===== \n \n");
printf(" Digite 1 para Soma \n");
printf(" Digite 2 para Divis�o \n");
printf(" Digite 3 para Multiplica��o \n");
printf(" Digite 4 para Subtra��o \n");
printf("\n Op��o escolhida => ");
scanf("%d", &opcao);

switch(opcao){
case 1:
system("cls");
printf("==========> Soma <========== \n \n");
printf("Digite o primeira n�mero: ");
scanf("%f", &n1);
printf("Digite o segunda n�mero: ");
scanf("%f", &n2);
printf("\n");
printf("   |--------------------------------------------------|\n \n");
printf("   |        O resultado de %.2f + %.2f = %.2f       |\n \n",n1, n2, n1+n2);
printf("   |--------------------------------------------------|\n \n");
system("pause");

break;
case 2:
system("cls");
printf("==========> Divis�o <========== \n \n");
printf("Digite o primeiro n�mero: ");
scanf("%f", &n1);
printf("Digite o segundo n�mero: ");
scanf("%f", &n2);
printf("\n");
printf("   |--------------------------------------------------|\n \n");
printf("   |         O resultado de %.2f � %.2f = %.2f        |\n \n ",n1, n2, n1/n2);
printf("  |--------------------------------------------------|\n\n");
system("pause");
break;
case 3:
system("cls");
printf("==========> Multiplica��o <========== \n \n");
printf("Digite o primeiro n�mero: ");
scanf("%f", &n1);
printf("Digite o segundo n�mero: ");
scanf("%f", &n2);
printf("\n");
printf("   |--------------------------------------------------|\n \n");
printf("   |         O resultado de %.2f x %.2f = %.2f       |\n\n",n1, n2, n1*n2);
printf("   |--------------------------------------------------|\n \n");
system("pause");
break;
case 4:
system("cls");
printf("==========> Subtra��o <========== \n \n");
printf("Digite o primeiro n�mero: ");
scanf("%f", &n1);
printf("Digite o segundo n�mero: ");
scanf("%f", &n2);
printf("\n");
printf("   |--------------------------------------------------|\n \n");
printf("   |         O resultado de %.2f - %.2f = %.2f       |\n \n ",n1, n2, n1-n2);
printf("  |--------------------------------------------------|\n\n");
system("pause");
break;

}
if(opcao>4){
  system("cls");
  printf("Op��o Inv�lida! \n\n \n");
system("pause");

}
} while(0 != opcao);
}
