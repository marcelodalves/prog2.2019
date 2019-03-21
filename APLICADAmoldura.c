#include <stdio.h>

int moldura(int a, int b, char c)
{
	int i,j;
	int cont = 0;
	 for (i = 1; i<=a; i++){
		for (j = 1; j<=b; j++){
			if ((i==1)||(i==a)){
			printf("%c",c); cont++;}
			
			else if((j==1)||(j==b)){
			printf("%c",c); cont++;}
			
			else
			printf(" ");
		}
		printf("\n");
	}
return cont;
}
int main(){
	int a,b;
	char h;
	
	printf("\nInforme o caractere que sera feito\n");
	scanf("%c",&h);
	
	printf("\nInforme o tamanho da moldura:\n");
	scanf("%d %d",&a,&b);
	
	int total = moldura(a,b,h);
	printf("\nTotal de caracteres escritos: %d\n",total);
	return 0;
}
