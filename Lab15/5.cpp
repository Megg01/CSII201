#include<stdio.h>
#include<stdlib.h>
typedef struct Student{
	char fname[20], lname[20], id[10];
	float gpa;
};
void read(Student a[], int n){
	for(int i=0; i<n; i++){
		printf("First name:");
		scanf("%s", (a[i].fname));
		printf("Last name:");
		scanf("%s", (a[i].lname));
		printf("ID:");
		scanf("%s", (a[i].id));
		printf("Golch:");
		scanf("%f", &(a[i].gpa));
	}
	printf("\n");
}
int main(){
	int n;
	FILE *fw;
	printf("n=");
	scanf("%d", &n);
	Student a[n];
	read(a, n);
	if((fw=fopen("students.txt", "w")) == NULL) {
		printf("Error!");
		exit(1);
	}
	fw = fopen("students.txt", "w");
	for(int i=0; i<n; i++){
		fprintf(fw, "%s\n", a[i].fname);
		fprintf(fw, "%s\n", a[i].lname);
		fprintf(fw, "%s\n", a[i].id);
		fprintf(fw, "%.1f\n", a[i].gpa);
	}
	fclose(fw);
	return 0;
}
