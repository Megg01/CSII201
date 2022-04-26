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
	d=(a>b)*(a>c)*a+(b>a)*(b>c)*b+(c>a)*(c>b)*c;
	printf("hamgiin ih too=%d\n",d);
	d=(a<b)*(a<c)*a+(b<a)*(b<c)*b+(c<a)*(c<b)*c;
	printf("hamgiin baga too=%d\n",d);
	d=(a<b)*(a>c)*a+(b<a)*(b>c)*b+(c<a)*(c>b)*c+(a>b)*(a<c)*a+(b>a)*(b<c)*b+(c>a)*(c<b)*c;
	printf("dundah too=%d",d);
	return 0;
}
