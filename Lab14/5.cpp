#include<stdio.h>
void reverse(int *begin, int *end){
	int a = (end-begin)/2;
	int *b = begin;
	int *e = end-1;
	for(int i=0; i<a; i++,b++,e--){
		int tmp=*e;
		*e=*b;
		*b=tmp;
	}
}
int main(){
	int a[5]={3, 7, 1, 2, 4};
	reverse(a, a+3);
	int i;
	for(i=0; i<5; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
