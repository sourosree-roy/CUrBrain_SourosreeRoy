#include <stdio.h>
int readArray(int a[]){
    char s[10000];
    int n=0,k,x;
    char *p;
    fgets(s,10000,stdin);
    p=s;
    while(sscanf(p,"%d%n",&x,&k)==1){
        a[n]=x;
        n++;
        p+=k;
    }
    return n;
}
int absolute(int x){
    if(x<0)return -x;
    return x;
}
int main(){
    int a[1000],n,i,r;
    n=readArray(a);
    r=a[0];
    for(i=1;i<n;i++){
        if(absolute(a[i])<absolute(r))r=a[i];
    }
    printf("%d",r);
    return 0;
}