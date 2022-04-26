#include<stdio.h>
#include<string.h>
int main(){
	char a[200], b[100], c[100];
	int i,s,j,p,o=0;
	printf("Temdegtiin tsuwaag oruulna uu\n");
	gets(a);
	printf("Ugiig oruulna uu\n");
	gets(b);
	for(j=0;j<strlen(a);j=i+1){
		i=j;
		s=0;
		p=0;
		while(a[i]!=' '){//ugiin urtiig olno
			s++;
			i++;
		}
		if(strlen(b)==s){//ugiin urt haih ugiin urt tentsuu baival
			i=j;
			while(b[p]==a[i]){
				if(b[p]!=' '){
					p++;
					i++;
				}//tentsuu baigaa uyd l davtalt hiigdej baigaa uchraas p-g nemne
			}
		}
		if(p==strlen(b)){
			printf("%d-s %d-r bairand baina.",j,j+p-1);//ugiin ehnii useg ba suulin usgiin bairshil
			o=-1;
			break;
		}
	}
	if(o==0){
		printf("-1");
	}
	return 0;
}
