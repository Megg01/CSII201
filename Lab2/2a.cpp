#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,d,k,e;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	k=a*a*a+b/c;
	e=(sqrt(k*k+d))/(d*d-a*b/c)*d;
	printf("%.2f",e);
	return 0;
}
