#include <stdio.h>

int main()
{

int a, b, troca;
int *pa, *pb; //ponteiro

printf("\nEntre com o valor de A:\n");
scanf("%d",&a);

printf("\nEntre com o valor de B:\n");
scanf("%d",&b);

printf("\nO valor de A eh: %d",a);
printf("\nO valor de B eh: %d",b);

//ponteiro pegando o endereço e consequentemente o valor
pa = &a;
pb = &b;

//formula de TROCA
troca = *pa;
*pa = *pb;
*pb = troca;

printf("\nO valor trocado se da por: A = %d e B = %d",*pa,*pb); //se colocar sem o *, vai aparecer o endereço ao inves da troca



return 0;
}
