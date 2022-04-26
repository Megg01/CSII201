#include<stdio.h>
int main(){
	int a,b,c;
	printf("2 toogoo oruulna uu\n");
	scanf("%d%d",&a,&b);
	if(a>=b){
		while(!(a%b==0)){
			c=a%b;
			a=b;
			b=c;
		}
		printf("Hamgiin ih yronhii huwaagch=%d",b);
	}
	else{
		while(!(b%a==0)){
			c=b%a;
			b=a;
			a=c;
		}
		printf("Hamgiin ih yronhii huwaagch=%d",a);
	}
	return 0;
}
