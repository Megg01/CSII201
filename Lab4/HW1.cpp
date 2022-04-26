#include<stdio.h>
int main()
{
	int n,s,a,i;
	printf("toogoo oruulna uu\n");
	scanf("%d",&n);
	s=0;
	if(n%2==1)
		{
		for(a=n;a>0;)
		{
		s=a%10+s;
		a=a/10;
		}
		if(s%3==0)
			printf("3t huwaagdana\n");
			else printf("3t huwaagddaggui\n");
		}
	else { 
		s=n%100;
		if(s%4==0)
			printf("4t huwaagdana\n");
			else printf("4t huwaagddaggui\n");
		}
	return 0;
}
