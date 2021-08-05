#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int t, x, i, d, o, sum;
    cin>>t;
    while(t--) {
        cin>>x;
        if(x == 1) {
            cout<<1<<"\n";
        }
        else {
            sum = 0;
            d = log10(x)+1;
            o = x%10;
            for(i=0; i<o-1; i++) {
                sum = sum + 10;
            }
            for(i=1; i<=d; i++) {
                sum = sum + i;
            }
            
            cout<<sum<<"\n";
        }
    }
    
    return 0;
}