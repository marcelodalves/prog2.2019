#include <stdio.h>

void troca(int *pa, int *pb);
int main (void){
	int a=10, b=20;
	troca(&a,&b);
	printf(" a=%d b=%d\n",a,b);
}
void troca(int *pa, int *pb){
	int tmp=*pb;
	*pb=*pa;
	*pa=tmp;
}
