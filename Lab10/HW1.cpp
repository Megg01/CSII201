#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void read_2darray(int a[][100], int n, int m)
{
	int i,j;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d", &a[i][j]);
}
void print_2darray(int a[][100], int n, int m)
{
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
}
void min(int a[][100], int n, int m, int row[], int col[])
{
	int i,j,k;
	for(i=0; i<n; i++){
		for(k=0,j=1; j<m; j++){
			if(a[i][k]>a[i][j]){
				k=j;
			}
		}
		row[i]=a[i][k];//i moriin hamgiin baga too
	}
	for(j=0; j<m; j++){
		for(k=0,i=1; i<n; i++){
			if(a[k][j]>a[i][j]){
				k=i;
			}
		}
		col[j]=a[k][j];//j baganiin hamgiin baga too
	}
}
int main(){
	int c_row, c_col, i;
	int A[100], B[100];
	int C[100][100];
	printf("husnegtiin mor, baganii toog oruul: ");
	scanf("%d%d", &c_row, &c_col);
	read_2darray(C, c_row, c_col);
	print_2darray(C, c_row, c_col);
	min(C, c_row, c_col, A, B);
	printf("mor buriin hamgiin baga: ");
	for(i=0; i<c_row; i++){
		printf("%d-r moriin hamgiin baga: %d\n", i, A[i]);
	}
	printf("bagana buriin hamgiin baga: ");
	for(i=0; i<c_col; i++){
		printf("%d-r moriin hamgiin baga: %d\n", i, B[i]);
	}
	return 0;
}
