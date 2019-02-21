#include <stdio.h>

/*
  Faça um programa para corrigir uma prova com 5 questões de múltipla escolha (a, b, c, d ou e), em uma turma com 3 alunos. Cada questão da prova vale 1 ponto. Ao final, mostre a pontuação dos 3 alunos.
*/

int main() {
  char mat[3][5],gab[5];

  for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
      printf("Digite a resp da questao %d do aluno %d: ",j,i);
      scanf(" %c",&mat[i][j]);
    }
  }

  printf("Digite o gabarito:\n");

  for(int i=0;i<5;i++){
    printf("Q%d: ",i);
    scanf(" %c",&gab[i]);
  }

  // Funciona para todos os alunos
  
  for(int i=0;i<3;i++){
    int ponto = 0;
    for(int j=0;j<5;j++){
      if (mat[i][j] == gab[j])
        ponto++;
    }
    printf("O aluno %d teve %d pontos\n",i,ponto);
  }


  return 0;
}
