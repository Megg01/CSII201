#include<stdio.h>
int main()
{
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=(a<b)*a+(a>=b)*b;
	printf("hamgiin baga too=%d\n",c);
	c=(a>b)*a+(a<=b)*b;
	printf("hamgiin ih too=%d",c);
	return 0;
}
