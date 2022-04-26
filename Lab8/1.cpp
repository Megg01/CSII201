#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[100],b[100],c[100],d[100],e[100],f[100];
	int k;
	printf("a.Tanii ovog?\n");
	gets(a);
	printf("b.Tanii ner\n");
	gets(b);
	printf("c.Tanii torson on sar odor?\n");
	gets(c);
	printf("e.Durtai ongo?\n");
	gets(d);
	printf("f.Hobbi yu ve?\n");
	gets(e);
	printf("g.Choloot tsagaaraa yu hiideg ve?\n");
	gets(f);
	k=2021-atoi(c);
	printf("%s ovogtoi %s ni %s odor torson. Odoo %d nastai. Tuunii durtai ongo bol %s. Ter choloot tsagaaraa %s hiideg. Tuunii hobby bol %s.", a, b, c, k, d, f, e);
	return 0;
}
