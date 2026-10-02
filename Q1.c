#include<stdio.h>
int main(){
    int n;
    int digits=0,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        digits++;
        rem=n%10;
        n=n/10;
    }
    if(digits%2==0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}