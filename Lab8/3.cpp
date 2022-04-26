#include<stdio.h>
#include<string.h>
int main(){
	int n,i,s,k;
	char a[100],b[100];
	printf("Ehnii ugiig oruulna uu\n");
	gets(a);
	printf("Hoyr dahi ugiig oruulna uu\n");
	gets(b);
	n=strlen(a);
	k=strlen(b);
	s=0;
	if(n==k){//ehnii ug 2-doh ugiin urt tentsuu baigaa uyd uildel hiine
		for(i=0;i<n;i++){
			if(a[i]==b[i]){
			s=s+1;
			}
		}
	}
	if(s==k){
		printf("2 ug adilhan");	
	}
	else{
		printf("2 ug adilhan bish");
	}
	return 0;
}
