#include<stdio.h>
struct Rational{
	int d,n; //d/n
};
typedef struct Rational Rational;
Rational add(const Rational *a, const Rational *b){
	Rational *x;
	x->d=a->d*b->d+a->n*b->n;
	x->n=a->n*b->n;
	printf("%d/%d\n", x->d, x->n);
}
Rational sub(const Rational *a, const Rational *b){
	Rational *x;
	x->d=a->d*b->d-a->n*b->n;
	x->n=a->n*b->n;
	printf("%d/%d\n", x->d, x->n);
}
Rational mult(const Rational *a, const Rational *b){
	Rational *x;
	x->d=a->d*b->d;
	x->n=a->n*b->n;
	printf("%d/%d\n", x->d, x->n);
}
Rational div(const Rational *a, const Rational *b){
	Rational *x;
	x->d=a->d*b->n;
	x->n=a->n*b->d;
	printf("%d/%d\n", x->d, x->n);
}
void simplify(Rational *a){
	int x=a->d;
	int y=a->n;
	int r=x%y;
	while(r!=0){
		x=y;
		y=r;
		r=x%y;
	}
	a->d/=y;
	a->n/=y;
	printf("%d/%d\n", a->d, a->n);
}
void read(Rational *a){
	scanf("%d", &a->d);
	scanf("%d", &a->n);
}
void print(Rational *a){
	printf("%d/%d\n", a->d, a->n);
}
int main(){
	Rational a,b;
	read(&a);
	print(&a);
	simplify(&a);
	read(&b);
	add(&a, &b);
	sub(&a, &b);
	mult(&a, &b);
	div(&a, &b);
	return 0;
}
