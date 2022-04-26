#include<stdio.h>
#include<stdlib.h>
typedef struct Student{
	char fname[20], lname[20], id[10];
	float gpa;
};
void hewleh(Student a[], int i){
	printf("First name: %s\n", (a[i].fname));
	printf("Last name: %s\n", (a[i].lname));
	printf("ID: %s\n", (a[i].id));
	printf("Golch: %.1f\n", (a[i].gpa));
	printf("\n");
}
int main(){
	FILE *fr;
	Student a[10];
	if((fr=fopen("students.txt", "r")) == NULL) {
		printf("Error!");
		exit(1);
	}
	fr = fopen("students.txt", "r");
	int i=0;
	while(!feof(fr)){
		fscanf(fr, "%s", a[i].fname);
		fscanf(fr, "%s", a[i].lname);
		fscanf(fr, "%s", a[i].id);
		fscanf(fr, "%f", &a[i].gpa);
		i++;
	}
	for(int j=0; j<i-1; j++){
		hewleh(a,j);
	}
	fclose(fr);
	return 0;
}
