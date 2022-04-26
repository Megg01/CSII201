#include<stdio.h>
int main(){
	int a[100];
	int n,x,i;
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("x=");
	scanf("%d",&x);
	int s=0;
	for(i=0;i<n;i++){
		if(x==a[i]){
			printf("\n%d dugaartai husnegtiin nudend baigaa too x-tei adil.",i);
			s=s+1;
		}
	}
	if(s==0){
		printf("-1");
	}
	return 0;
}
