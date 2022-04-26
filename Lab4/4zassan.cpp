#include<stdio.h>
int main()
{
	int a;
	printf("Sholtei ustai hool ideh uu\n");
	scanf("%d",&a);
	if(a==1){
		printf("Tsaitai bol tiim ugui bol sholtei baih ni\n");
		scanf("%d",&a);
		if(a==1){
			printf("Budaatai bol tiim ugui bol banshtai baih ni\n");
			scanf("%d",&a);
			if(a==1)
			printf("Budaatai tsai\n");
			else printf("Banshtai tsai\n");}
		else 	{printf("Yutai shol idmer baina\n");
				printf("Guriltai bol 1-gej bichne uu\n");
				printf("Puntuuztei bol 2-gej bichne uu\n");
				printf("Goimontoi bol 3-gej bichne uu\n");
				printf("Banshtai bol 4-gej bichne uu\n");
				printf("Mahtai bol 5-gej bichne uu\n");
				printf("Nogootoi bol 6-gej bichne uu\n");
				scanf("%d",&a);
				if(a==1)
					printf("Lapsha\n");
					else 
						if(a==2)
						printf("Huitsai\n");
						else 
						if(a==3)
						printf("Goimontoi shol\n");
						else 
						if(a==4)
						printf("Banshtai shol\n");
						else 
						if(a==5)
						printf("Har shol\n");
						else
						printf("Nogootoi shol\n");}}
	else {
		printf("Mah ni tatsan uu\n");
		scanf("%d",&a);
		if(a==1){
			printf("Guriland orooson uu\n");
			scanf("%d",&a);
			if(a==1){
				printf("Yaj bolgoson\n");
				printf("Sharsan bol 1-gej bichne uu\n");
				printf("Jignesen bol 2-gej bichne uu\n");
				scanf("%d",&a);
				if(a==1){
					printf("Yaj sharsan\n");
					printf("Hoolgoj sharsan bol 1-gej bichne uu\n");
					printf("Shuud sharsan bol 2-gej bichne uu\n");
					scanf("%d",&a);
					if(a==1)
						printf("Piroshki\n");
					else printf("Huushuur\n");}
				else{
					printf("Yaj jignesen\n");
					printf("Hoolgoj jignesen bol 1-gej bichne uu\n");
					printf("Shuud jignesen bol 2-gej bichne uu\n");
					scanf("%d",&a);
					if(a==1)
						printf("Mantuun buuz\n");
					else printf("Buuz\n");}}
			else{
			printf("Budaatai yu\n");
			printf("Ondgond orooson bol 1-gej bichne uu\n");
			printf("Mahaa booronhiilson bol 2-gej bichne uu\n");
			scanf("%d",&a);
				if(a==1)
					printf("Ondogtei bifshteks\n");
				else printf("Teftel");}}
		else{
			printf("Yutai holison\n");
			printf("Guriltai bol 1-gej bichne uu\n");
			printf("Ondogtei bol 2-gej bichne uu\n");
			printf("Budaatai bol 3-gej bichne uu\n");
			printf("Nogootoi bol 4-gej bichne uu\n");
			scanf("%d",&a);
			if(a==1)
				printf("Tsuiwan\n");
			else 
				if(a==2)
				printf("Ondogtei huurga\n");
				else 
				if(a==3){
					printf("Hoorond ni holih uu\n");
					scanf("%d",&a);
					if(a==1)
						printf("Gulysh\n");
					else printf("Budaatai huurga\n");}
				else printf("Nogootoi huurga\n");}
	}
	return 0;
}
