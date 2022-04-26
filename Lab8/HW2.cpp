#include<stdio.h>
#include<string.h>
int main(){
	char a[200],c[30];
	int i,s,p,j,k,l;
	printf("Oguulberee oruulna uu (Oguulber duussan bol zai awna uu)\n");
	gets(a);
	k=0;
	for(j=0;j<strlen(a);j=i+1){
		for(i=j,s=0; a[i]!=' '; i++){//Space-r ugnuudiig taslan avch egshiguudiig toolno
			if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='e'||a[i]=='y'||a[i]=='A'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='E'||a[i]=='Y'){
				s++;
			}
		}
		l=i-j;//l ni ugiin usgiin too
		if(k<s){
			for(i=j,p=0;p<l;p++,i++){//c husnegted ugiig bichne
				c[p]=a[i];
			}
			k=s;
		}
	}
	puts(c);
	return 0;
}
