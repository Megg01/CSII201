#include<stdio.h>
int main(){
	int n,i,s;
	printf("n=");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++){
		if(i%2==0){
			s=s+i;
		}
	}
	printf("n hurtelh tegsh toonii niilber=%d",s);
	return 0;
}
