#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	double a,b,c,d;
	printf("x1=");
	scanf("%d",&x1);
	printf("y1=");
	scanf("%d",&y1);
	printf("x2=");
	scanf("%d",&x2);
	printf("y2=");
	scanf("%d",&y2);
	printf("x3=");
	scanf("%d",&x3);
	printf("y3=");
	scanf("%d",&y3);
	a=sqrt(x1*x1+y1*y1);
	b=sqrt(x2*x2+y2*y2);
	c=sqrt(x3*x3+y3*y3);
	d=(a>b)*(a>c)*a+(b>a)*(b>c)*b+(c>a)*(c>b)*c;
	printf("Hamgiin hol=");
	if(d==c)
		printf("(%d,%d)\n",x3,y3);
		else if(d==b)
			printf("(%d,%d)\n",x2,y2);
			else printf("(%d,%d)\n",x1,y1);
	d=(a<b)*(a<c)*a+(b<a)*(b<c)*b+(c<a)*(c<b)*c;
	printf("Hamgiin oir=");
	if(d==c)
		printf("(%d,%d)\n",x3,y3);
		else if(d==b)
			printf("(%d,%d)\n",x2,y2);
			else printf("(%d,%d)\n",x1,y1);
	return 0;
}
