#include <stdio.h>
int main() {
    int n, a[100], i, j, c, max = 0, ans;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    ans = a[0];
    for(i = 0; i < n; i++) {
        c = 0;
        for(j = 0; j < n; j++)
            if(a[i] == a[j])
                c++;
        if(c > max || (c == max && a[i] < ans)) {
            max = c;
            ans = a[i];
        }
    }
    printf("%d", ans);
    return 0;
}