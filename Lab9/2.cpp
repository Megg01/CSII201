#include<stdio.h>
void read(int a[], int n)
{
	for(int i=0; i<n; i++ )
	scanf("%d", &a[i]);
}
void print(int a[], int n)
{
	for(int i=0; i<n; i++ )
	printf("%d\n", a[i]);
}
int main(){
	int k,s;
	printf("A husnegt=");
	scanf("%d",&k);
	printf("B husnegt=");
	scanf("%d",&s);
	int A[k],B[s];
	read(A,k);
	print(A,k);
	printf("\n");
	read(B,s);
	print(B,s);
	return 0;
}

