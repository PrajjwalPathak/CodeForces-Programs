#include<iostream>

using namespace std;

int main() {
    int m, n, a;
    scanf("%d %d %d", &n, &m, &a);
    cout<<((n*m)/(a*a))+(n/a)+(m/a);
    return 0;
}