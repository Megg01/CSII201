#include<stdio.h>
int main(){
	int a[4][10][10];
	int i,j,k,n,m,l,p;
	printf("Ug bairnii ortsnii toog oruulna uu=");
	scanf("%d",&n);
	printf("Heden davhar ve=");
	scanf("%d",&m);
	printf("Davhartaa heden ailtai ve=");
	scanf("%d",&l);
	p=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			for(k=1;k<=l;k++){
				printf("\na[%d][%d][%d]=%d",i,j,k,p);
				p=p+1;
			}
		}
		printf("\n");
	}
	return 0;
}
