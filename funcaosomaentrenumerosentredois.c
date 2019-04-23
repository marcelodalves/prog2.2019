#include <stdio.h>

int somaInteiro(int soma);
int main(){
	int c, soma;

	c = somaInteiro(soma);
			
	printf("A soma dos inteiros entre eles eh: %d",c);
			
}
int somaInteiro(int soma){
	int i, a, b;
	
	printf("Entre com o n1:");
	scanf("%d",&a);
	printf("Entre com o n2:");
	scanf("%d",&b);
	
	for (i=a+1;i<b;i++){
		soma += i;
	}
	return soma;	
}
