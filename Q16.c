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
int main(){
    int a[1000],n,i,first=0,second=0,hasFirst=0,hasSecond=0;
    n=readArray(a);
    for(i=0;i<n;i++){
        if(!hasFirst||a[i]>first){
            if(hasFirst){
                second=first;
                hasSecond=1;
            }
            first=a[i];
            hasFirst=1;
        }
        else if(a[i]!=first&&(!hasSecond||a[i]>second)){
            second=a[i];
            hasSecond=1;
        }
    }
    if(hasSecond)printf("%d",second);
    else printf("-1");
    return 0;
}