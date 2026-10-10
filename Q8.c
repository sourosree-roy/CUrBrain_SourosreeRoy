#include <stdio.h>
int kthFactor(int n,int k) {
    int count=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            count++;
            if(count==k) {
                return i;
            }
        }
    }
    return -1;
}
int main() {
    int n,k;
    printf("Enter n and k:");
    scanf("%d%d",&n,&k);
    printf("The %d-th factor of %d is: %d\n",k,n,kthFactor(n,k));
    return 0;
}