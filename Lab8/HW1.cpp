#include<stdio.h>
#include<string.h>
int main(){
	char a[200];
	int i,s;
	printf("Oguulberee oruulna uu\n");
	gets(a);
	for(s=0,i=0;i<strlen(a);i++){
		if(a[i]==32||a[i]==46){//46 ni .-iin ASCII code
			s=s+1;
		}
	}
	printf("%d ugtei.",s);
	return 0;
}
