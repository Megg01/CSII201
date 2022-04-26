#include<stdio.h>
#include<stdlib.h>
int *get_array(int n, int value){
	int *p =(int*) malloc(sizeof(int)*n);
	if(p == NULL){
		printf("Sanax oi xvrsengvi!\n");
		exit(1);
	}
	for(int i=0; i<n;i++){
		p[i] = value;
	}
	return p;
}
int main(){
	int n, value, *p;
	printf("n=");
	scanf("%d", &n);
	printf("value=");
	scanf("%d", &value);
	p=get_array(n, value);
	for(int i=0; i<n; i++){
		printf("%d\n", p[i]);
	}
	free(p);
	return 0;
}
