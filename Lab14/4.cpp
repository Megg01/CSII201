#include<stdio.h>
void find(int *begin, int *end, int x, int y){
	while(begin<end){
		if(*begin==x){
			*begin=y;
		}
		begin++;
	}
}
int main(){
	int a[5]={3, 7, 1, 2, 4};
	int *p, x, y;
	printf("xaix too: ");
	scanf("%d", &x);
	printf("orluulax too: ");
	scanf("%d", &y);
	find(a, a+5, x, y);
	for(int i=0; i<5; i++){
		printf("\n%d", a[i]);
	}
	return 0;
}
