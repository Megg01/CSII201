#include<stdio.h>
int digit_sum(int n){
	int s;
	for(s=0;n>0;n/=10){
		s=s+n%10;
	}
	return s;
}
int main(){
	int n,i;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%digit_sum(i)==0){
			printf("%d\n",i);
		}
	}
	return 0;
}
