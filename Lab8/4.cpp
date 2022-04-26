#include<stdio.h>
int main(){
	int i;
	char s[20]="hello";
	char s2[20]="Muis-iinhaan";
	for(i=0;i<5;i++){
		s2[i]=s[i];
	printf("%c",s2[i]);}
	return 0;
}
