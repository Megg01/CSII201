#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("d=");
	scanf("%d",&d);
	int i=1;
	do{
		printf("%d%d%d%d\n",a,b,c,d);
		i++;
	}
	while(i<24);
	return 0;
}
	
