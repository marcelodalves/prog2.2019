#include <stdio.h>

int fatorial(int n){
   int fat = n - 1;

   while(fat > 1){
      n = n * fat;
      fat--;
   }

   return n;
}

int main(void){
   int resultado;
   int n;
   
   printf("Digite o numero a ser fatorado: \n");
   scanf("%d", &n);
   
   resultado = fatorial(n);
   
   printf("O numero %d fatorado eh:%d\n",n,resultado);
}
