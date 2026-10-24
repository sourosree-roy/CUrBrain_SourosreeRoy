#include<stdio.h>
#define MOD 1000000007
int ModularSum(int n,int arr[n]){
    int result=0;
    for(int i=0;i<n;i++){
        result= (result+(arr[i]%MOD))%MOD;
    }
    return result;
}
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",ModularSum(n,arr));
    return 0;
}