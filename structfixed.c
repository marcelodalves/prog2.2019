#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct funcionario{
	char nome[500];
	int idade;
	char sexo[30];
	char cpf[30];
	char data[10];
	int setor;
	char cargo[30];
	float salario;
};

int main(){
struct funcionario func;
int i;

//for (i=0;i<2;i++){
fflush(stdin);
printf("Entre com o nome:");
scanf("%s",&func.nome);

fflush(stdin);
printf("Entre com a idade:");
scanf("%d",&func.idade);

fflush(stdin);
printf("Entre com o sexo:");
scanf("%s",&func.sexo);

fflush(stdin);
printf("Entre com o CPF:");
scanf("%s",&func.cpf);

fflush(stdin);
printf("Entre com a data de nascimento:");
scanf("%s",&func.data);

fflush(stdin);
printf("Entre com o Setor:");
scanf("%d",&func.setor);

fflush(stdin);
printf("Entre com o cargo:");
scanf("%s",&func.cargo);

fflush(stdin);
printf("Entre com o salario:");
scanf("%f",&func.salario);

fflush(stdin);
printf("O funcionario %s tem %d anos, nasceu no dia %s e eh do sexo %s. Seu CPF eh %s , seu Codigo do Setor eh %d, seu cargo eh %s e seu salario eh %f",func.nome,func.idade,func.data,func.sexo,func.cpf,func.setor,func.cargo,func.salario);

system("pause");
return 0;
}
