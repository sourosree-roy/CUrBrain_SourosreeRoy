#include<stdio.h>
int modPower(int base,int power,int mod){
    int result=1%mod;
    base=base%mod;
    for(int i=0;i<power;i++){
        result=(result*base)%mod;
    }
    return result;
}
int main(){
    int base,power,mod;
    printf("Enter base");
    scanf("%d",&base);
    printf("Enter power");
    scanf("%d",&power);
    printf("Enter mod");
    scanf("%d",&mod);
    printf("%d",modPower(base,power,mod));
    return 0;
}