#include<stdio.h>
int main(){
    int n, digits=0,g;
    int d;
    printf("Enter the number:");
    scanf("%d",&n);
    g=n;
    while(n!=0){
        digits++;
        n=n/10;
    }
    int l[digits];
    for(int i=digits-1;i>=0;i--){
        d=g%10;
        if(d%2==0){
            l[i]=0;
        }
        else{
            l[i]=d;
        }
        g=g/10;
    }
    printf("[");
    for(int i=0;i<digits;i++){
        printf("%d, ",l[i]);
    }
    printf("]");
    return 0;
}