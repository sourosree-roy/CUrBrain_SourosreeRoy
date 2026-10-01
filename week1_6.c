#include<stdio.h>
int main(){
    int n,rem,a,b,acount=0,bcount=0,d;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    while(n!=0){
        rem=n%10;
        if(rem==a){
            acount++;
        }
        else if(rem==b){
            bcount++;
        }
        n=n/10;
    }
    if(acount>bcount){
        d=acount-bcount;
    }
    else{
        d=bcount-acount;
    }
    printf("%d",d);
    return 0;
}