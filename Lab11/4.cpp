#include<stdio.h>
struct Rational{
	int d,n;
};
typedef struct Rational Rational;
void add(Rational a, Rational b){
	Rational x;
	x.d=a.d*b.n+a.n*b.d;
	x.n=a.n*b.n;
	printf("%d/%d\n", x.d, x.n);
}
void sub(Rational a, Rational b){
	Rational x;
	x.d=a.d*b.n-a.n*b.d;
	x.n=a.n*b.n;
	printf("%d/%d\n", x.d, x.n);
}
void mult(Rational a, Rational b){
	Rational x;
	x.d=a.d*b.d;
	x.n=a.n*b.n;
	printf("%d/%d\n", x.d, x.n);
}
void div(Rational a, Rational b){
	Rational x;
	x.d=a.d*b.n;
	x.n=a.n*b.d;
	printf("%d/%d\n", x.d, x.n);
}
void simplify(Rational a){
	int x=a.d;
	int y=a.n;
	int r=x%y;
	while(r!=0){
		x=y;
		y=r;
		r=x%y;
	}
	a.d/=y;
	a.n/=y;
	printf("%d/%d\n",a.d,a.n);
}
void print(Rational a){
	printf("%d/%d\n",a.d,a.n);
}
int main(){
	struct Rational a,b;
	printf("1-r toonii hurtver huvaariig oruulna uu\n");
	scanf("%d",&(a.d));
	scanf("%d",&(a.n));
	printf("2-r toonii hurtver huvaariig oruulna uu\n");
	scanf("%d",&(b.d));
	scanf("%d",&(b.n));
	add(a,b);
	sub(a,b);
	mult(a,b);
	div(a,b);
	simplify(a);
	print(a);
	return 0;
}
