#include<stdio.h>
int main()
{
	int a,i,x;
	printf("x=");
	scanf("%d",&x);
	i=0;
	for(a=x;a>0;i++){
	    a=a/10;
	}
    printf("x too %d orontoi",i);
    return 0;
}
