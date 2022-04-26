#include<stdio.h>
int main(){
	int a[100];
	int n,i;
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i=i-1){
		printf("\na[%d]=%d",i,a[i]);
	}
	return 0;
}
