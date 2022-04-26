#include<stdio.h>
#include<string.h>
char usr[10][100]={"bat", "dorj", "bold", "tsetsgee"};
char pass[10][100]={"123456", "password", "pass247", "justinbeaber"};
int check(char u[], char p[])
{
	int i=0;
	while(true){
		if(strcmp(usr[i],u)==0){//usr[i] ba u temdegt mor tentsuu baival
			if(strcmp(pass[i],p)==0){//pass[i] ba p temdegt mor tentsuu baival
				return 1;
			}
		}
		if(i>3){
			break;
		}
		i++;
	}
	return 0;
}
int main(){
	char n[20], p[20];
	printf("name: ");
	gets(n);
	printf("password: ");
	gets(p);
	if(check(n,p)==1){
		printf("Password zow baina.");
	}
	else{
		printf("Password buruu baina.");
	}
	return 0;
}
