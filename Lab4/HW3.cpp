#include<stdio.h>
int main()
{
	double a,b,c,d;
	printf("Emegtei bol 1 gej bichne uu\n");
	printf("Eregtei bol 2 gej bichne uu\n");
	scanf("%d",&c);
	printf("Biyiin jingee kilogrammaar oruulna uu\n");
	scanf("%d",&a);
	printf("Biyiin ondoroo santimetreer oruulna uu\n");
	scanf("%d",&b);
	if(c==1){
		d=49+((b-150)/2.5)*1.7;
		if(d<a)
			printf("Jingiin iluudeltei\n");
			else if(d>a)
				printf("Jingiin dutagdaltai");
				else printf("Hewiin jintei\n");}
	else{
		d=52+((b-150)/2.5)*1.9;
		if(d<a)
			printf("Jingiin iluudeltei\n");
			else if(d>a)
				printf("Jingiin dutagdaltai");
				else printf("Hewiin jintei\n");}
	return 0;
}
