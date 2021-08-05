#include<iostream>

using namespace std;

int main() {

    int t, n, c2, c1;
    cin>>t;
    while(t--) {
        c1 = 0;
        c2 = 0;
        cin>>n;
        c1 = (n/3); 
        c2 = (n/3);
        if(c1 + 2*c2 == n) {
            cout<<c1<<" "<<c2<<"\n";
        }
        else {
            if((n - ((2*c2)+c1)) > 1) {
                c2++;
            }
        else {
            c1++;
        }
        cout<<c1<<" "<<c2<<"\n";
        }
        
    }
    
    return 0;
}