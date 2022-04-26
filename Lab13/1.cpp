#include<stdio.h>
int main(){
	int x;
	int *p;
	p=&x;
	*p=10;
	printf("%d\n",x);
	return 0;
}
