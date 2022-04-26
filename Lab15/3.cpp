#include<stdio.h>
#include<stdlib.h>
int *find_divisors(int n){
	int *p =(int*) malloc(sizeof(int)*n);
	if(p == NULL){
		printf("Sanax oi xvrsengvi!\n");
		exit(1);
	}
	int s=0;
	for(int j=1, i=1; i<=n;i++){
		if(n%i==0){
			p[j] = i;
			s++;
			j++;
		}	
	}
	p[0] = s;
	return p;
}
int main(){
	int *p;
	int n;
	printf("n=");
	scanf("%d", &n);
	p = find_divisors(n);
	for(int i=1; i<=p[0]; i++){
		printf("%d\n", p[i]);
	}
	free(p);
	return 0;
}
