#include<stdio.h>
struct Date {
	int d,m,y;
};
typedef struct Date Date;
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
			else if(a.d>b.d){
				return 0;
			}
			return -1;
		}
	}
}
int uduriin_zuruu(Date a, Date b){
	int sar[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,s,k;
	if(less(a,b)==1){
		k=0,s=0;
		if(b.m<=a.m){
			k=b.y-a.y;
			s+=365*k;
		}
		if(k!=0){
			if(b.m<a.m){
				for(i=b.m;i<a.m-1;i++){
					s-=sar[i];
				}
				if(b.d<a.d){
					s-=a.d-b.d;
				}
				else{
					s+=b.d-a.d;
				}
			}
			else{
				for(i=a.m-1;i<b.m-1;i++){
					s+=sar[i];
				}
				if(b.d<a.d){
					s-=a.d-b.d;
				}
				else{
					s+=b.d-a.d;
				}
			}
		}
		else{
			for(i=a.m-1;i<b.m-1;i++){
				s+=sar[i];
			}
			if(b.m>a.m){
				if(b.d<a.d){
					s-=a.d-b.d;	
				}
				else{
					s+=b.d-a.d;
				}
			}
			else{
				s+=b.d-a.d;
			}
		}
		return s;
	}
	else if(less(a,b)==0){
		k=0,s=0;
		if(a.m<=b.m){
			k=a.y-b.y;
			s+=365*k;
		}
		if(k!=0){
			if(a.m<b.m){
				for(i=a.m;i<b.m-1;i++){
					s-=sar[i];
				}
				if(a.d<b.d){
					s-=b.d-a.d;
				}
				else{
					s+=a.d-b.d;
				}
			}
			else{
				for(i=b.m-1;i<a.m-1;i++){
					s+=sar[i];
				}
				if(a.d<b.d){
					s-=b.d-a.d;
				}
				else{
					s+=a.d-b.d;
				}
			}
		}
		else{
			for(i=b.m-1;i<a.m-1;i++){
				s+=sar[i];
			}
			if(a.m>b.m){
				if(a.d<b.d){
					s-=b.d-a.d;	
				}
				else{
					s+=a.d-b.d;
				}
			}
			else{
				s+=a.d-b.d;
			}
		}
		return s;
	}
	else{
		return 0;
	}
}
int main(){
	Date a,b;
	printf("on:");
	scanf("%d",&a.y);
	printf("sar:");
	scanf("%d",&a.m);
	printf("odor:");
	scanf("%d",&a.d);
	printf("on:");
	scanf("%d",&b.y);
	printf("sar:");
	scanf("%d",&b.m);
	printf("odor:");
	scanf("%d",&b.d);
	printf("%d",uduriin_zuruu(a,b));
	return 0;
}
