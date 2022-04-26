#include<stdio.h>
void read(int A[], int n){
	for(int i=0; i<n; i++ )
		scanf("%d", &A[i]);
}
void print(int A[], int n){
	for(int i=0; i<n; i++ )
		printf("%d\n", A[i]);
}
int join(int A[], int B[], int n, int m){
	int i=n;
	for(int j=0;j<m;j++,i++){
		A[i]=B[j];
	}
	return n+m;
}
int main(){
	int a[100], b[100], n, m;
	scanf("%d",&n);
	read(a,n);
	print(a,n);
	printf("\n");
	scanf("%d",&m);
	read(b,m);
	print(b,m);
	printf("\n");
	int k=join(a,b,n,m);
	print(a,k);
	return 0;
}
