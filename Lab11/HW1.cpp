#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student{
	char fname[20], lname[20], id[10];
	float golch;
};
typedef struct Student Student;
void read_students(Student a[], int n){
	printf("\n");
	for(int i=1;i<=n;i++){
		printf("First name:");
		scanf("%s", (a[i].fname));
		printf("Last name:");
		scanf("%s", (a[i].lname));
		printf("ID:");
		scanf("%s", (a[i].id));
		printf("Golch:");
		scanf("%f", &(a[i].golch));
	}
	printf("\n");
}
void print_students(Student a[], int n){
	for(int i=1;i<=n;i++){
		printf("First name: %s\n", (a[i].fname));
		printf("Last name: %s\n", (a[i].lname));
		printf("ID: %s\n", (a[i].id));
		printf("golch: %.1f\n", (a[i].golch));
	}
}
int search_by_fname(Student a[], int n, char fname[]){
	for(int i=1;i<=n;i++){
		if(strcmp(a[i].fname, fname)==0){
			return i;
		}
	}
	return 0;
}
int search_by_lname(Student a[], int n, char lname[]){
	for(int i=1;i<=n;i++){
		if(strcmp(a[i].lname, lname)==0){
			return i;
		}
	}
	return 0;
}
int search_by_id(Student a[], int n, char id[]){
	for(int i=1;i<=n;i++){
		if(strcmp(a[i].id, id)==0){
			return i;
		}
	}
	return 0;
}
int search_by_golch(Student a[], int n, float golch){
	for(int i=1;i<=n;i++){
		if(a[i].golch==golch){
			return i;
		}
	}
	return 0;
}
void sort_by_golch(Student a[], int n){
	Student tmp;
	int k;
	for(int i=0;i<n;i++){
		k=i;
		for(int j=i+1;j<n;j++){
			if(a[k].golch>a[j].golch){
				k=j;
			}
		}
		tmp=a[k];
		a[k]=a[i];
		a[i]=tmp;
	}
}
void hewleh(Student a[], int i){
	printf("First name: %s\n", (a[i].fname));
	printf("Last name: %s\n", (a[i].lname));
	printf("ID: %s\n", (a[i].id));
	printf("golch: %.1f\n", (a[i].golch));
	printf("\n");
}
int main(){
	int n,i;
	char fname[20], lname[20], id[10];
	float golch;
	printf("n=");
	scanf("%d",&n);
	Student a[n];
	read_students(a,n);
	print_students(a,n);
	printf("Search first name:");
	scanf("%s", fname);
	i=search_by_fname(a,n,fname);
	if(i!=0){
		hewleh(a,i);
	}
	else{
		printf("baihgui.\n");
	}
	printf("Search last name:");
	scanf("%s", lname);
	i=search_by_lname(a,n,lname);
	if(i!=0){
		hewleh(a,i);
	}
	else{
		printf("baihgui.\n");
	}
	printf("Search ID:");
	scanf("%s", id);
	i=search_by_id(a,n,id);
	if(i!=0){
		hewleh(a,i);
	}
	else{
		printf("baihgui.\n");
	}
	printf("Search golch:");
	scanf("%f", &golch);
	i=search_by_golch(a,n,golch);
	if(i!=0){
		hewleh(a,i);
	}
	else{
		printf("baihgui.\n");
	}
	sort_by_golch(a,n);
	for(i=1;i<=n;i++){
		hewleh(a,i);
	}
	return 0;
}
