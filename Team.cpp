#include<iostream>

using namespace std;

int main() {
    int n, i, j, count=0;
    scanf("%d", &n);
    int f[n][3];
    int sum[n];
    for(i=0; i<n; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &f[i][j]);
        }
        sum[i] = f[i][0] + f[i][1] + f[i][2];
    }
    for(i=0; i<n; i++) {
        if(sum[i]>=2) {
            count++;
        }
    }
    cout<<count;
    return 0;
}