#include<stdio.h>
int main(){
	int a[100];
	int n,i;
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int s=0,j=0;
	for(i=1;i<n;i++){
		if(a[j]<=a[i]){
			s=s+1;
		}
		else{
			s=s-1;
		}
		j++;
	}
	if(s==j){
		printf("Osohoor erembelegdsen");
	}
	else if(s==-j){
		printf("Buurahaar erembelegdsen");
	}
		else{
			printf("Erembelegdeegui");
		}
	return 0;
}
