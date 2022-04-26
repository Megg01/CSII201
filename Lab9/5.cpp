#include<stdio.h>
int power(int,int);
int main(){
	int n,a;
	scanf("%d%d",&a,&n);
	printf("%d\n", power(a,n));
	return 0;
}
int power(int a, int b){
	int t=1;
	for(int i=0; i<b; i++)//a toog b udaa urjine
		t*=a;
	return t;
}
