    #include <stdio.h>
     
    int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
    int a, i, n, s;
    scanf("%d", &n);
    for(i = 0, s = 0; i < n; i++) {
    scanf("%d", &a);
    s = 10 * s + a;
    }
    printf("%d\n", s);
    }
    } 
