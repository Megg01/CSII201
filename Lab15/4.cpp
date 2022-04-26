#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fr;
	int s=0, a, n;
	if((fr=fopen("input4.txt", "r")) == NULL) {
		printf("Error!");
		exit(1);
	}
	fr = fopen("input4.txt", "r");
	fscanf(fr, "%d", &n);
	for(int i=0; i<n; i++){
		fscanf(fr, "%d", &a);
		s+=a;
	}
	fclose(fr);
	printf("Total=%d", s);
	return 0;
}
