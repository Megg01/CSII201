#include<stdio.h>
int count(int n, int A[]){
	int s=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			A[s]=i;
			s++;
		}
	}
	return s;
}
int main(){
	int n,i,A[100];
	printf("n=");
	scanf("%d",&n);
	printf("%d huvaagchtai.", count(n,A));
	for(int i=0;i<count(n,A);i++){
		printf("\n%d",A[i]);
	}
	return 0;
}
