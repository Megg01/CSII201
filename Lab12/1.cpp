#include<stdio.h>
typedef struct {
	int d,m,y;
} Date;
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
int less(Date a, Date b){
	if(a.y<b.y){
		return 1;
	}
	else if(a.y>b.y){
		return 0;
	}
	else{
		if(a.m<b.m){
			return 1;
		}
		else if(a.m>b.m){
			return 0;
		}
		else{
			if(a.d<b.d){
				return 1;
			}
			else{
				return 0;
			}
		}
	}
}
int main(){
	Date a,b;
	a=read();
	b=read();
	print(a);
	less(a,b);
	return 0;
}
