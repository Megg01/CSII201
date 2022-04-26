#include<stdio.h>
#include<string.h>
int is_valid(char pwd[]){
	int i,s;
	if(!(strlen(pwd)>6)){
		return 1;//nuuts ugiin urt 6-s baga baival
	}
	for(s=0,i=0;i<strlen(pwd);i++){
		if(pwd[i]>=65 && pwd[i]<=90){
			s++;
		}
	}
	if(!(s>=1)){
		return 2;//Tom useg oroogui bol
	}
	for(s=0,i=0;i<strlen(pwd);i++){
		if(pwd[i]>=48 && pwd[i]<=57){
			s++;
		}
	}
	if(!(s>=3)){
		return 3;//3-aas baga too oroltsson bol
	}
	for(s=0,i=0;i<=strlen(pwd);i++){
		if(pwd[i]=='?'||pwd[i]=='!'||pwd[i]=='$'||pwd[i]=='*'||pwd[i]=='('||pwd[i]==')'||pwd[i]=='-'||pwd[i]=='+'){
			s++;
		}
	}
	if(!(s>=1)){
		return 4;//Temdegtuudees ydaj 1 ni baihgui bol
	}
	return 0;//Bugd biylej baival
}
int main(){
	char pwd[100];
	gets(pwd);
	switch(is_valid(pwd)){
		case 0: printf("Nuuts ug shaardlaga hangaj baina.");
				break;
		case 1: printf("Urt ni ydaj 6 baina.");
				break;
		case 2: printf("Dor hayj neg tom useg orson baina.");
				break;
		case 3: printf("Ydaj 3 shirheg too baih.");
				break;
		case 4: printf("?, !, $, , *, (, ), –, + temdegtuudiin ydaj neg ni baih.");
				break;
	}
	return 0;
}
