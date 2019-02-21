#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, maior=0, num[5];

    printf("\nEntre com 100 numeros:\n");
    printf("\n");
    for (i=0;i<5;i++){
      printf("Num. %d : ", i+1);
      scanf("%d", &num[i]);
      if(i==0){
	  maior=num[i];
	  }
      if(num[i]>maior){
        maior=num[i];
      }
      }
    printf("\no maior valor eh %d\n", maior);
    system("pause");
    return 0;
}

https://drive.google.com/file/d/1dBW-jk7lZjBQA44Lfze09KuAqKY5g8MP/view
