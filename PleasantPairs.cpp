#include<iostream>

using namespace std;

int main() {

    int t, n, i, j, k, c;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        long long int a[n];
        for(j=0; j<n; j++) {
            scanf("%lld", &a[j]);
        }
        c = 0;
        for(j=1; j<n; j++) {
            for(k=j+1; k<=n; k++) {
                if((a[j-1]*a[k-1]) == (j + k)) {
                    c++;
                }  
            }
        }
        printf("%d\n", c);
    }
    
    return 0;
}