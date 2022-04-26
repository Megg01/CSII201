#include<stdio.h>
#include<math.h>
struct Triangle{
	int a,b,c;
};
typedef struct Triangle Triangle;
double find_area(Triangle g){
	double p=(g.a+g.b+g.c)/2;
	double s=sqrt(p*(p-g.a)*(p-g.b)*(p-g.c));
	return s;
}
int main(){
	Triangle a,b;
	double s1,s2;
	scanf("%d",&(a.a));
	scanf("%d",&(a.b));
	scanf("%d",&(a.c));
	scanf("%d",&(b.a));
	scanf("%d",&(b.b));
	scanf("%d",&(b.c));
	if(find_area(a)>find_area(b)){
		printf("1-deh gurvaljin tom");
	}
	else if(find_area(a)<find_area(b)){
		printf("2-doh gurvaljin tom");
	}
	else{
		printf("2 gurvaljin tentsuu");
	}
	return 0;
}
