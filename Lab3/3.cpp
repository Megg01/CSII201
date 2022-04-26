#include<stdio.h>
int main()
{
	int a,b,c;
	a=3;
	b=5;
	c=4;
	c<b && a<c && printf("bolj"); //c too ni b toonoos baga, a toonoos ih baih heregtei.
	(a%3==0 || c%5==3) && printf(" bna.\n"); //a too ni 3-t huwaahad uledgdelgui gardag, eswel c toog 5-t huwaahad 3 ulddeg baih heregtei.
	return 0;
}
