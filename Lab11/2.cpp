#include<stdio.h>
#include<math.h>
struct Point{
	int x,y;
};
double distance(Point a,Point b){
	double d=sqrt(pow(b.x-a.x, 2)+pow(b.y-a.y,2));
	return d;
}
int main(){
	struct Point a,b;
	printf("a tsegiin coordinatiig oruulna uu\n");
	scanf("%d",&(a.x));
	scanf("%d",&(a.y));
	printf("b tsegiin coordinatiig oruulna uu\n");
	scanf("%d",&(b.x));
	scanf("%d",&(b.y));
	printf("%f",distance(a,b));
	return 0;
}
