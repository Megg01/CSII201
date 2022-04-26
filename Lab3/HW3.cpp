#include<stdio.h>
main()
{
	double a;
	printf("Awsan onoogoo oruulna uu=");
	scanf("%lf",&a);
	a=a/35*100;
	if(a<60)
		printf("Dungiin unelgee=F");
		else 
			if(a<70)
			printf("Dungiin unelgee=D");
			else 
				if(a<80)
				printf("Dungiin unelgee=C");
				else 
					if(a<90)
					printf("Dungiin unelgee=B");
					else 
						printf("Dungiin unelgee=A");
	return 0;
}
