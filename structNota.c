#include <stdio.h>
struct notas{
	char nome[50];
	float av[2];
	float av3;
	float media;
};
typedef struct notas notas; //ao inves de digitar "struct notas" pode digitar apenas notas

int main(){
	notas nota;
	int maiorNota=0,i; //maiorNota se refere a AVx q nao sera substituida pela AV3
	
	for (i=0;i<2;i++){
		printf("\n||||| Entre com a nota da AV%d |||||\n",i+1);
		scanf("%f",&nota.av[i]);
		if (nota.av[i]>maiorNota){
			maiorNota = nota.av[i];
		}
	}
	
	//printf("\nA maior nota eh %d ",maiorNota);
		nota.media = (nota.av[0]+nota.av[1])/2;
	
	if (nota.media<6){
		printf("\nMedia %.1f, reprovado! Entre com a AV3: ",nota.media);
		scanf("%f",&nota.av3);
		
		nota.media = (maiorNota + nota.av3)/2;
	}
	
	printf("\nA media final eh %.1f \n",nota.media);
	
system("pause");
return 0;
}
