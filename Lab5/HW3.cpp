#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("3-r sar heddeh odroos ehlehiig oruulna uu");
	printf("\nDavaa garag bol 1");
	printf("\nMygmar garag bol 2");
	printf("\nLhagva garag bol 3");
	printf("\nPurev garag bol 4");
	printf("\nBaasan garag bol 5");
	printf("\nBymba garag bol 6");
	printf("\nNym garag bol 7-iin toog bichne uu");
	printf("\n");
	scanf("%d",&a);
	system("cls");
	printf("\nMon\tTue\tWed\tThu\tFri\tSat\tSun");
	printf("\n");
	b=0;
	for(int s=1;s<a;s++){
		printf(" \t");
		b=b+1;
	}//sariin ehleh odor hurtelh garaguudad hooson zai hevlene
	for(int i=1;i<=31;i++){
		if(i==8){
		printf(" 8*\t");
		i++;
		b=b+1;	
		}//3 sariin 8n baival ardaa *-tei hevlene
		printf(" %d \t",i);
		b=b+1;
		if(b==7){
			printf("\n");
			b=0;
		}//7 honog ongorsnii daraagaar shine mornoos ehlene.
	}
	printf("\n*-Buh niitiin amraltiin odruud");
	return 0;
}
