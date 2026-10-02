#include<stdio.h>
int main(){
    int n,g,rem,p=1,s=0,d;
    printf("Enter the number:");
    scanf("%d",&n);
    g=n;
    while(n!=0){
        rem=n%10;
        p=p*rem;
        s=s+rem;
        n=n/10;
    }
    d=p-s;
    printf("%d",d);
    return 0;
}