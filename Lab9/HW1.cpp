#include<stdio.h>
int palindrom(int a){
	int s,n=a;
	for(s=0;n>0;n/=10){//toog urvuugaar ni bichne
		s=s*10+n%10;
	}
	if(s==a){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	if(palindrom(n)==1){
		printf("Mun");
	}
	else{
		printf("Bish");
	}
}
