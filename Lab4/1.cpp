#include<stdio.h>
int main(){
	int a;
	printf("Onoo oruulna uu=");
	scanf("%d",&a);
	if(a%400==0 || (a%4==0 && a%100!=0))
		printf("Ondor jil\n");
	else printf("Ondor jil bish");
	return 0;
}
