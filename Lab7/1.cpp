#include<stdio.h>
int main(){
    int a[10];
    int i,n,j,k,tmp;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(a[k]>a[j]){
                k=j;
            }
        }
        tmp=a[k];
        a[k]=a[i];
        a[i]=tmp;
    }
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    return 0;
}
