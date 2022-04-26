#include<stdio.h>
#include<string.h>
int count(char s[]){
	int i,k=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
			k++;
		}
	}
	return k;
}
int main(){
	char a[100];
	printf("Ugiig oruulna uu\n");
	gets(a);
	printf("%d egshigtei.",count(a));
	return 0;
}
