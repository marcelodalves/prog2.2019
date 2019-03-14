#include <stdio.h>
int num;
int func(int a,int b);
int main(){
	int first = 0, sec = 50;
	num = 10;
	num += func(first,sec);
	printf("\nnum = %d\tfirst = %d\t sec = %d",num,first,sec);
}
int func (int a,int b){
	a = (a + b) / 2;
	num -= a;
	return a;
}
