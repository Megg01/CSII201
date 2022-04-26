#include<stdio.h>
int main()
{
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=a>b;
	printf("> operator ashiglawal=%d\n",c);
	c=a<b;
	printf("< operator ashiglawal=%d\n",c);
	c=a<=b;
	printf("<= operator ashiglawal=%d\n",c);
	c=a>=b;
	printf(">= operator ashiglawal=%d\n",c);
	c=a!=b;
	printf("!= operator ashiglawal=%d\n",c);
	c=a==b;
	printf("== operator ashiglawal=%d\n",c);
	return 0;
}

