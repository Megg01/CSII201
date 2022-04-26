#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,x1,x2,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d>0){
	x1=(-b+sqrt(d))/2*a;
	x2=(-b-sqrt(d))/2*a;
	printf("x1=%.2f x2=%.2f",x1,x2);
	}
	else if(d==0){
		x1=-b/2*a;
		printf("x1=%.2f",x1);
	}
		else{
			printf("Bodit shiid baihgui");
		}
	return 0;
}
