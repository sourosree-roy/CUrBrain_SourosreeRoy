#include <stdio.h>
int hasDivisiblePrefix(int arr[], int n, int k) {
    if (k<0)k=-k;
    int rem=0;
    for (int i=0;i<n;i++){
        rem=(rem+arr[i])%k;
        if(rem==0){
            return 1;         
        }
    }
    return 0;
}

int main() {
    int a1[] = {4, 2, 9};
    int a2[] = {1, 2, 4};
    int a3[] = {5};
    int a4[] = {0, 1};
    int a5[] = {-2, 2, 1};
    printf("%s\n", hasDivisiblePrefix(a1, 3, 3) ? "True" : "False");
    printf("%s\n", hasDivisiblePrefix(a2, 3, 5) ? "True" : "False");
    printf("%s\n", hasDivisiblePrefix(a3, 1, 5) ? "True" : "False");
    printf("%s\n", hasDivisiblePrefix(a4, 2, 7) ? "True" : "False");
    printf("%s\n", hasDivisiblePrefix(a5, 3, 3) ? "True" : "False");
    return 0;
}