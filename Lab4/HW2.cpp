#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Onoodriin on sariig oruulna uu\n");
	printf("On=");
	scanf("%d",&a);
	printf("Sar=");
	scanf("%d",&b);
	printf("Odor=");
	scanf("%d",&c);
	printf("Shalgah gej bui on sariig oruulna uu\n");
	printf("On=");
	scanf("%d",&d);
	printf("Sar=");
	scanf("%d",&e);
	printf("Odor=");
	scanf("%d",&f);
	if(a<d)
		printf("Ireedui\n");
		else if(d>a)
			printf("Ongorson\n");
			else if(b<e)
				printf("Ireedui\n");
				else if(b>e)
					printf("Ongorson");
					else if(c<f)
						printf("Ireedui\n");
						else if(c>f)
							printf("Ongorson\n");
							else printf("Onoodor");
	return 0;
}
