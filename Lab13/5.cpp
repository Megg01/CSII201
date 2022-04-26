#include<stdio.h>
struct Triangle{
	int a, b, c;
};
void read(struct Triangle *p){
	scanf("%d", &p->a);
	scanf("%d", &p->b);
	scanf("%d", &p->c);
}
int main(){
	struct Triangle g;
	read(&g);
	return 0;
}
