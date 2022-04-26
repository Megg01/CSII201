#include<stdio.h>
int main(){
	int A[100], B[100], C[200];
	int n,m,i,j,l;
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
	l=0;
	for(i=0;i<n;i++){
		C[l]=A[i];
		l++;
	}
	for(j=0;j<m;j++){
		C[l]=B[j];
		l++;
	}
	for(l=0;l<m+n;l++){
		printf("\nC[%d]=%d",l,C[l]);
	}
	return 0;
}
