#include<stdio.h>
#include<math.h>
struct Triangle{
	int a,b,c;
};
typedef struct Triangle Triangle;
double talbai(int a,int b, int c){
	double p=(a+b+c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	Triangle A;
	double s1,s2;
	scanf("%d",&(A.a));
	scanf("%d",&(A.b));
	scanf("%d",&(A.c));
	s1=talbai(A.a , A.b, A.c);
	scanf("%d",&(A.a));
	scanf("%d",&(A.b));
	scanf("%d",&(A.c));
	s2=talbai(A.a , A.b, A.c);
	if(s1>s2){
		printf("1-deh gurvaljin tom");
	}
	else if(s1<s2){
		printf("2-doh gurvaljin tom");
	}
	else{
		printf("2 gurvaljin tentsuu");
	}
	return 0;
}
