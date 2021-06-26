#include<iostream>

using namespace std;

int main() {

    int t, n, i, j, temp;
    scanf("%d", &t);
        for(i=0; i<t; i++) {
            scanf("%d", &n);
            int a[n];
            for(j=0; j<n; j++) {
                a[j] = j+1;
            }
            if(n%2 == 0) {
                for(j=0; j<n; j = j+2) {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
            else {
                for(j=0; j<n-2; j = j+2) {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
                temp = a[n-1];
                a[n-1] = a[n-2];
                a[n-2] = temp;
            }
            for(j=0; j<n; j++) {
                printf("%d ", a[j]);
            }
            printf("\n");
        }
    
    return 0;
}