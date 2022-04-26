#include<stdio.h>
int main(){
    int a[100];
    int n,i,s,k;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }//ondriig oruulna
    s=0;
    for(i=0;i<n;i++){
        s=s+a[i];
    }//niit ondriig olno
    s=s/n, k=0;//dundaj ondor
    for(i=0;i<n;i++){
        if(s<a[i]){
            k=k+1;
        }
    }
    printf("%d huuhed dundjaas deeguur ondortei.",k);
    return 0;
}
