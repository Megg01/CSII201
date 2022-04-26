#include<stdio.h>
int count(int n){
	int i,s=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			s++;
		}
	}
	return s;
}
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	printf("%d huvaagchtai.", count(n));
	return 0;
}
