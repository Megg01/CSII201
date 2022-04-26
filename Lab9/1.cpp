#include<stdio.h>
int is_even(int k){
	if(k%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n,i;
	printf("n toog oruulna uu\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(is_even(i)==0){
			printf("%d\n",i);
		}
	}
	return 0;
}

