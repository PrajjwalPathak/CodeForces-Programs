#include<iostream>

using namespace std;

int main() {

    int y, a, b, c, d;
    cin>>y;
    while(true) {
        y = y + 1;
        d = y%10;
        c = (y/10)%10;
        b = (y/100)%10;
        a = y/1000;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
            break;
        }
        else {
            continue;
        }
    }
    printf("%d", y);
    
    return 0;
}