
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
setlocale(LC_ALL,"");
float nota1, nota2;
int opcao;

printf ("Digite um valor:\n");
scanf ("%f", &nota1);
printf ("Digite outro valor:\n");
scanf ("%f", &nota2);

printf ("Escolha uma das 4 opcaoes:\n");
printf("1-somar\n");
printf ("2-subtrair\n");
printf("3-dividir\n");
printf("4-multiplicar\n");
scanf("%d", &opcao);
switch (opcao){
case 1:
    printf("\n A soma de %f + %f = %f\n",nota1,nota2 , nota1 + nota2);

    break;
case 2:

printf("\n A soma de %f - %f = %f\n",nota1,nota2 , nota1 - nota2 );

break;
case 3:
    printf("\n A soma de %f / %f = %f\n",nota1,nota2 , nota1 / nota2);

    break;
case 4:
    printf("\n A soma de %f * %f = %f\n",nota1,nota2 , nota1 * nota2);
    break;

default :
    printf("opcao invalida");
    break;
    }






system ("pause");
}
