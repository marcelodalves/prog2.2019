#include <stdio.h>

int main(){
	int a;
	float b;
	
	FILE *fp = fopen("arquivo.txt","w");
	if ( fp == NULL){
		printf("\nERRO\n");
		exit(1);
	}
	
	
	printf("\nDigite dois valores:");
	scanf("%d %f",&a,&b);
	
	//printf("%d %f",a,b);
	fprintf(fp,"Valores sao: %d %f",a,b);
	fputs("\nfim do arquivo",fp); //ultima linha do arquivo
	
	
	fclose(fp); //fecha o arquivo
		return 0;
	
}

/* para um arquivo JA CRIADO

int meu_int;
float meu_float;
char minha_string[50];

FILE *fp = fopen("dados.txt","r");
if (fp==NULL){
	printf("ERRO");
	exit(1);
}

fscanf(fp,"%d %f %s",&meu_inteiro,&meu_float,minha_string);
printf("meu inteiro eh: %d\n",meu_inteiro);
printf("meu float eh: %f\n",meu_float);
printf("minha string eh: %s",minha_float);

fclose(fp);
}
