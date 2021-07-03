#include<iostream>

using namespace std;

int main() {
    int a[4], i, j, c = 0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    for(i=0; i<3; i++) {
        for(j=i+1; j<4; j++) {
            if(a[i] == a[j]) {
                c++;
                break;
            }
        }
    }
    cout<<c;
    
    return 0;
}