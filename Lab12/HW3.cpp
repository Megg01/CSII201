#include<stdio.h>
#include<math.h>
typedef struct{
	int dim;
	float dat[100];
}Vector;
int dot_product(Vector a, Vector b){
	if(a.dim==b.dim){
		int s=0;
		for(int i=0;i<a.dim;i++){
			s=s+(a.dat[i]*b.dat[i]);
		}
		return s;
	}
	return 0;
}
Vector scalar_mult(Vector a, float t){
	for(int i=0;i<a.dim;i++){
		a.dat[i]*=t;
	}
	return a;
}
int len(Vector a){
	int s=0;
	for(int i=0;i<a.dim;i++){
		s=s+pow(a.dat[i],2);
	}
	return s;
}
Vector read(Vector a, int n){
	for(int i=0;i<n;i++){
		scanf("%f", &a.dat[i]);
	}
	return a;
}
int main(){
	Vector a,b;
	printf("a hemjees:");
	scanf("%d",&a.dim);
	for(int i=0;i<a.dim;i++){
		scanf("%f", &a.dat[i]);
	}
	printf("b hemjees:");
	scanf("%d",&b.dim);
	for(int i=0;i<b.dim;i++){
		scanf("%f", &b.dat[i]);
	}
	printf("%d",dot_product(a,b));
	return 0;
}
