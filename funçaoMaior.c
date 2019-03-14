#include <stdio.h>

void trocaMaior(int pos);
int vet[5];

int main(){
	int i;
	// ler o vetor 
	for (i=0;i<5;i++){
		printf("\nEntre com elemento %d:\n",i+1);
		scanf("%d",&vet[i]);
	}
// trocar usando a funçao trocaMaior
trocaMaior(0);	

for (i=0;i<5;i++){
	printf("%d ",vet[i]);
}
return 0;
}

void trocaMaior(int pos){
	
	int i;
	int maior = 0;
	int posMaior;
	//verificar qual maior e sua posição
for (i=0;i<5;i++){
	if(vet[i] > maior){
		maior = vet[i];
		posMaior= i;
	}
}
	//trocar
	int temp = vet[posMaior];
	vet[posMaior] = vet[pos];
	vet[pos] = temp;
}
	
	
	
