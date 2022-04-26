#include<stdio.h>
int main(){
    int a[100];
    int n,i,s,k,l;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    k=n-1,s=0;
    for(i=0;i<n;i++){
        if(a[i]==a[k]){
            s=s+1;
        }
        k--;
    }
    if(s==n){
        printf("Tegsh hemtei");
    }
    else{
        printf("Tegsh hemgui");
    }
    return 0;
}
