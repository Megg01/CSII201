#include<stdio.h>
#include<math.h>
typedef struct{
	int x,y;
}Point;
typedef struct{
	Point A, B, C;
	double a,b,c;
}Triangle_P;
double distance(Point a,Point b){
	double d=sqrt(pow(b.x-a.x, 2)+pow(b.y-a.y,2));
	return d;
}
double find_area(Triangle_P g){
	double p=(g.a+g.b+g.c)/2;
	double s=sqrt(p*(p-g.a)*(p-g.b)*(p-g.c));
	return s;
}
int main(){
	Triangle_P g;
	printf("A tsegiin coordinatiig oruulna uu\n");
	scanf("%d",&(g.A.x));
	scanf("%d",&(g.A.y));
	printf("B tsegiin coordinatiig oruulna uu\n");
	scanf("%d",&(g.B.x));
	scanf("%d",&(g.B.y));
	printf("C tsegiin coordinatiig oruulna uu\n");
	scanf("%d",&(g.C.x));
	scanf("%d",&(g.C.y));
	g.a=distance(g.A,g.B);
	g.b=distance(g.B,g.C);
	g.c=distance(g.C,g.A);
	printf("%.2f", find_area(g));
	return 0;
}
