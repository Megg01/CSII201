#include<stdio.h>
void find(int a[], int n, int *min, int *max){
	for(int i=0;i<n;i++){
		int k=i;
		for(int j=i+1;j<n;j++){
			if(a[k]>a[j]){
				k=j;
			}
		}
		int tmp=a[k];
		a[k]=a[i];
		a[i]=tmp;
	}
	*min=a[0];
	*max=a[n-1];
}
void read(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
int main(){
	int a[10];
	int x,y;
	read(a,5);
	find(a,n,&x,&y);
	printf("%d %d", x, y);
	return 0;
}
