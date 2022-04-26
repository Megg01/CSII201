#include<stdio.h>
int main(){
	int A[100][100];
	int n,m,i,j,x;
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("A[%d][%d]=",i,j);
		scanf("%d",&A[i][j]);
		}
	}
	printf("x=");
	scanf("%d",&x);
	int s=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(x==A[i][j]){
			printf("\n%d-r moriin %d-r baganad baigaa too x-tei adil.",i,j);
			s=s+1;
		}
		}
	}
	if(s==0){
		printf("-1");
	}
	return 0;
}
