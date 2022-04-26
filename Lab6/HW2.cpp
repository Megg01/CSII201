#include<stdio.h>
int main(){
	int a[100][100];
	int s,n,i,j;
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		s=0;
		for(j=0;j<n;j++){
		s=s+a[i][j];
		}
		printf("\n%d-r moriin niilber=%d",i,s);
	}
	for(j=0;j<n;j++){
		s=0;
		for(i=0;i<n;i++){
		s=s+a[i][j];
		}
		printf("\n%d-r baganii niilber=%d",j,s);
	}
	for(i=0,j=0,s=0;i<n;i++,j++){
		s=s+a[i][j];
	}
	printf("\nZuun diagonaliin niilber=%d",s);
	for(i=n-1,j=0,s=0;j<n;i--,j++){
		s=s+a[i][j];
	}
	printf("\nBaruun diagonaliin niilber=%d",s);
	return 0;
}
