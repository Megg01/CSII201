#include<stdio.h>
int A[100];
int prime_range(int a, int b){
	int i,s,j=0;
	while(a<=b){
		for(s=0,i=2; i<a; i++){//huvaagchdiin toog olno
			if(a%i==0){
				s++;
			}
		}
		if(s==0){//huvaagchgui uyd A husnegted hadgalna
			A[j]=a;
			j++;
		}
		a++;
	}
	return j;
}
int main(){
	int a,b,too;
	printf("a toog oruulna uu\n");
	scanf("%d",&a);
	printf("b toog oruulna uu\n");
	scanf("%d",&b);
	too=prime_range(a,b);
	printf("%d-anhnii too baina.\n\n", too);
	for(int i=0;i<too;i++){
		printf("%d\n",A[i]);
	}
	return 0;
}
