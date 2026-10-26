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
    int a[1000],r[1000],n,t,i,c=0;
    n=readArray(a);
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(a[i]>=t){
        r[c]=a[i];
        c++;
        }
    }
    printf("[");
    for(i=0;i<c;i++){
        if(i>0)printf(",");
        printf("%d",r[i]);
    }
    printf("]");
    return 0;
}