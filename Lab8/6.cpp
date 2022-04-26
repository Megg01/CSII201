#include<stdio.h>
#include<string.h>
int main(){
	char a[200];
	int n,i;
	printf("Oguulberiig oruul\n");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		printf("%c",a[i]);
		if(a[i]==32){//32 ni space-iin ASCII code
			printf("\n");
		}
	}
	return 0;
}
