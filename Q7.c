#include <stdio.h>
int gcd(int a,int b){
while(b!=0){
int temp=b;
b=a%b;
a=temp;
}
return a;
}
int arrayGcd(int arr[],int n) {
int result=arr[0];
for(int i=1;i<n;i++){
result=gcd(result, arr[i]);
if(result==1){
break;
}
}
return result;
}
int main(){
int n;
printf("Enter number of elements:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:");
for(int i=0;i < n;i++){
scanf("%d",&arr[i]);
}
printf("GCD of the array is:%d\n",arrayGcd(arr, n));
return 0;
}