#include <stdio.h>

int range(int maior, int menor, int sub);
int vet[5];

int main(){
	int i;
	for (i=0;i<5;i++){
		printf("\nEntre com o valor [i]",i+1);
		scanf("%d",vet[i]);
	}
	printf("\nRangee: %d\n",range(sub));
	return 0;
}
int range(int maior, int menor, int sub){
	int i;
	int sub;
	maior = 0;
	menor = 0;
	
	for (i=0;i<5;i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
	for (i=0;i<5;i++){
		if(vet[i]<menor){
			menor = vet[i];
		}
	}
	sub = maior-menor;
	return sub;
	}	
