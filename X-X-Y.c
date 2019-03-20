#include <stdio.h>
int x = 1, y = 2;
void xpto();
int alfa(int x, int y);
int main(){
	int x = 3;
	x = alfa(x,x);
	printf("\n1 - %d",x);
	return 0;
}
int alfa(int x, int y){
	int z = 3;
	xpto();
	printf("\n2 - %d", z);
	return x * y;
}
void xpto(){
	int z;
	z = x * 4;
	printf("\n3 - %d", x);
}
