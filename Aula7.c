#include <stdio.h>
#include <locale.h>


void main(){
setlocale(LC_ALL,"portuguese");
 //Definindo Variaveis
  int a = 6, b = 3;

printf("========> Opera��es Matematicas <========");

printf("\n A soma de %d + %d = %d \n",a,b, a + b);

printf("\n A subtra��o de %d - %d = %d \n",a,b, a - b);

printf("\n A divis�o de %d / %d = %d \n",a,b, a / b);

printf("\n A multiplica��o de %d * %d = %d \n",a,b, a * b);

printf("\n O Resto da Divis�o %d e %d = %d \n",a,b, a % b);

printf("\n O valor absoluto -3 = %d  \n",abs(-3));

}
