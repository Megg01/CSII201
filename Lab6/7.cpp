#include<stdio.h>
int main(){
	int A[100],B[100];
	int n,m,i,j;
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	for(j=0;j<m;j++){
		printf("B[%d]=",j);
		scanf("%d",&B[j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(A[i]==B[j]){
			printf("\n%d",A[i]);
		}
		}
	}
	return 0;
}
