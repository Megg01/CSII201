#include<stdio.h>
int main(){
	char A[100], B[100], C[200];
	int n,m,i,j,k,x,s;
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
	k=0;
	for(i=0;i<n;i++){
		C[k]=A[i];
		k=k+1;
	}//C husnegtiin ehend A husnegtiin elementiig onoono.
	for(j=0;j<m;j++){
		C[k]=B[j];
		k=k+1;
	}//C husnegted urgeljluulen B husnegtiin elementiig onoono.
	x=-1,s=0;
	for(k=0;k<n+m;k++){
		if(C[k]==x){
		s=s+1;
		}
	}//haruul utga husnegted baigaa esehiig shalgana.
	for(k=0;k<n+m;k++){
		for(i=k+1;i<=n+m;i++){
			if(C[k]==C[i]){
				C[i]=-1;
			}
		}
	}//davhardsan toonuudiig -1 bolgono.
	i=0;
	for(k=0;k<n+m;k++){
		if(C[k]!=-1){
			printf("\nC[%d]=%d",i,C[k]);
			i=i+1;
		}
	}
	if(s!=0){
	printf("\nC[%d]=%d",i,x);
	}
	return 0;
}
