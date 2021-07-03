#include<iostream>

using namespace std;

int main() {
    int n, i, p;
    float sum;
    cin>>n;
    sum = 0;
    for(i=0; i<n; i++) {
        cin>>p;
        sum = sum + p;
    }
    printf("%0.5f", (sum/n));
    return 0;
}