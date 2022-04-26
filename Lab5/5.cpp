#include<stdio.h>
int main(){
	int c;
	double n,f;
	printf("n=");
	scanf("%lf",&n);
	for(c=0;f<n;c++){
		f=(double)9/5*c+32;
		if(f<n){
			printf("\n%d %.1f",c,f);		
		}
	}
	return 0;
}
