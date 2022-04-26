#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,C;
	scanf("%lf%lf%lf",&a,&b,&C);
	C=C*3.14/180;
	c=a;
	c=sqrt((b*b)+(a*a)-(2*a*b*cos(C)));
	printf("c=%.2f",c);
	return 0;
}
