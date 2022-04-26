#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fr, *fw;
	int a, niilber=0;
	if((fr=fopen("input1.txt", "r")) == NULL) {
		printf("Error!");
		exit(1);
	}
	fr = fopen("input1.txt", "r");
	while(!feof(fr)){
		fscanf(fr, "%d", &a);
		niilber+=a;
	}
	if((fw=fopen("output1.txt", "w")) == NULL) {
		printf("Error!");
		exit(1);
	}
	fw = fopen("output1.txt", "w");
		fprintf(fw, "%d\n", niilber);
	fclose(fr);
	fclose(fw);
	return 0;
}
