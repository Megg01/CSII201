#include<stdio.h>
int min5(int a, int b, int c, int d, int e){
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					return a;
				}
				else{
					return e;
				}
			}
			else{
				if(d<e){
					return d;
				}
				else{
					return e;
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					return c;
				}
				else{
					return e;
				}
			}
			else{
				if(d<e){
					return d;
				}
				else{
					return e;
				}
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					return b;
				}
				else{
					return e;
				}
			}
			else{
				if(d<e){
					return d;
				}
				else{
					return e;
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					return c;
				}
				else{
					return e;
				}
			}
			else{
				if(d<e){
					return d;
				}
				else{
					return e;
				}
			}
		}
	}
}
int main(){
	int a,b,c,d,e;
	printf("1-r toog oruulna uu\n");
	scanf("%d",&a);
	printf("2-r toog oruulna uu\n");
	scanf("%d",&b);
	printf("3-r toog oruulna uu\n");
	scanf("%d",&c);
	printf("4-r toog oruulna uu\n");
	scanf("%d",&d);
	printf("5-r toog oruulna uu\n");
	scanf("%d",&e);
	printf("\nBaga too=%d", min5(a, b, c, d, e));
	return 0;
}
