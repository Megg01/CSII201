#include<stdio.h>
int main(){
	int n,s;
	printf("n=");
	scanf("%d",&n);
	for(s=0;n>0;){
	s=s+n%10;
	n=n/10;
	}
	printf("n toonii tsipruudiin niilber=%d",s);
	return 0;
}
