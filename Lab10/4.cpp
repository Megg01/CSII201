#include<stdio.h>
void read(int a[], int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void print(int a[], int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d", a[i]);
	printf("\n");
}
int modul(int x){// x toonii moduliig butsaana
	if(x<0){
		return -x;
	}
	return x;
}
int sum(int a[], int n){//a husnegtiin elementuudiin niilber
	int i,total=0;
	for(i=0;i<n;i++){
		total+=a[i];
	}
	return total;
}
int avg(int a[], int n){//a husnegtiin elementuudiin niilberiin dundaj
	int i,total=0;
	for(i=0;i<n;i++){
		total+=a[i];
	}
	return total/n;
}
int product(int a[], int n){//a husnegtiin elementuudiin urjver
	int i,total=1;
	for(i=0;i<n;i++){
		total*=a[i];
	}
	return total;
}
int main(){
	int a[100], n, b[100];
	printf("n toonii utgiig oruul: ");
	scanf("%d", &n);
	read(a, n);
	printf("Tanii oruulsan daraalal: ");
	print(a, n);
	int mu, i;
	mu=avg(a, n);
	printf("mu-iin utga: %d\n", mu);
	for(i=0; i<n; i++)
		b[i]=modul(a[i]-mu);
	int alpha;
	alpha=product(b, n);
	printf("alpha-iin utga: %d\n", alpha);
	return 0;
}
