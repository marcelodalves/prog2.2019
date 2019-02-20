#include <stdio.h>

#define TAM 15
int main()
{
	float notas[15],media,accNotas=0;
	int i,acimaMedia=0;
	
	for (i=0; i<TAM;i++)
	{
		printf("\nDigite a nota [%d]",i);
		scanf("%f",&notas[i]);
		accNotas= accNotas + notas[i];
	}
	media = accNotas/TAM;
	
	for (i=0;i<TAM;i++){
		if(notas[i]>media){
			acimaMedia++;
			}
		}

	printf("\n%d alunos estao acima da media de %.2f\n",acimaMedia,media);
	
	
	
	
	
	
	system("pause");
	return 0;
}
