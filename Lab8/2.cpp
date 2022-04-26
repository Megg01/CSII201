#include<stdio.h>
#include<string.h>
int main(){
	int n,i,s;
	char a[100];
	printf("Tsuvaag oruulna uu\n");
	gets(a);
	n=strlen(a);
	s=0;
	for(i=0;i<n;i++){
		if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='e'||a[i]=='y'){
			s=s+1;
		}
	}
	printf("Ug tsuvaand %d egshig baina", s);
	return 0;
}
