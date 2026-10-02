#include<stdio.h>
int reverse_and_double(int n){
    int d,rem,rev=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    d= rev*2;
    return d;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",reverse_and_double(n));
    return 0;
}