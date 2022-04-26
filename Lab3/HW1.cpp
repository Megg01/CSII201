#include<stdio.h>
int main()
{
	int a,i,x,s,m;
	printf("x=");
	scanf("%4d",&x);
	i=0;
	s=0;
	for(a=x;i<4;i++)
	    {
	    	m=a%10;
	    	s=s*10+m;
	        a=a/10;
	    }
    if(x==s){
    	printf("1");
    }
    	else {
		printf("0");
	}
    return 0;
}
	    
