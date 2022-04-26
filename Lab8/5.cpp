#include<stdio.h>
#include<string.h>
int main(){
	char a[100], b[100], c[200];
	int n,k,i,p;
	printf("Ehnii temdegtuudiig oruul\n");
	gets(a);
	printf("2-r temdegtuudiig oruul\n");
	gets(b);
	n=strlen(a);
	k=strlen(b);
	for(i=0;i<n;i++){
		c[i]=a[i];
	}//c husnegtiin ehend a-iin elementuudiig huulna
	for(p=0;p<k;p++,i++){//urgeljluulen b-iin elementiig huulna
		c[i]=b[p];
	}
	puts(c);
	return 0;
}
