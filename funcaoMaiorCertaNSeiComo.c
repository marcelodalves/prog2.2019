#include <stdio.h>

int functionMaior(int maior);
int vet[5];

int main(){
int i;
	
for (i=0; i<5;i++){
	printf("\Entre com um valor inteiro:\n");
	scanf("%d",&vet[i]);
}
printf("\nO maior valor inteiro eh: %d",functionMaior(vet[i]));
return 0;
}

int functionMaior(int maior){
	int i;
	maior = 0;
	for (i=0;i<5;i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
return maior;	
}
