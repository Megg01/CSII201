#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	a=0;
	b=0;
	c=1;
	d=1;
	e=1;
	f=1;
	a||printf("o")&&c;
	c&&d||printf("x");
	(d||b)&&f||printf("x");
	a+b==1&&printf("x");
	f&&printf("o");
	b&&d||printf("o");
	b+d==3&&printf("o");
	return 0;
}
