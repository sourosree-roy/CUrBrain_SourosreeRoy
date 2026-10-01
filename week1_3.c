#include<stdio.h>
int reversed(int n){
    int rev=0,rem,sum,g=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    sum=g+rev;
    if(rev==g){
        return rev;
    }
    else{
        return sum;
    }
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",reversed(n));
    return 0;
}