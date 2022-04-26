#include<stdio.h>
int a[100],i;
void read(int a[], int n)
{
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
}
int max(int a[], int n)
{
	int k=0;
	for(i=1; i<n; i++){
		if(a[k]<a[i]){
			k=i;
		}
	}
	return a[k];
}
int main(){
	int x,y;
	printf("A husnegt=");
	scanf("%d",&x);
	printf("B husnegt=");
	scanf("%d",&y);
	int A[x],B[y];
	read(A,x);
	printf("\n");
	read(B,y);
	if(max(A,x)>=max(B,y)){
		printf("max=%d",max(A,x));
	}
	else{
		printf("max=%d",max(B,x));
	}
	return 0;
}
