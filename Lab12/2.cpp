#include<stdio.h>
struct Date {
	int d,m,y;
};
typedef struct Date Date;
Date read(){
	Date date;
	printf("On: ");
	scanf("%d", &date.y);
	printf("Sar: ");
	scanf("%d", &date.m);
	printf("Odor: ");
	scanf("%d", &date.d);
	return date;
}
void print(Date dt){
	if(dt.m<10 && dt.d<10){
		printf("%d/0%d/0%d\n", dt.y, dt.m, dt.d);
	}
	else if(dt.m<10 && dt.d>=10){
		printf("%d/0%d/%d\n", dt.y, dt.m, dt.d);
	}
	else if(dt.m>=10 && dt.d<10){
		printf("%d/%d/0%d\n", dt.y, dt.m, dt.d);
	}
	else{
		printf("%d/%d/%d\n", dt.y, dt.m, dt.d);
	}
}
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	Date a[n];
	for(int i=0;i<n;i++){
		a[i]=read();
	}
	for(int i=0;i<n;i++){
		print(a[i]);
	}
	return 0;	
}
