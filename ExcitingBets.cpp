#include<iostream>

using namespace std;

long long int gcd(long int a, long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main() {
    
    int t, i;
    long long a, b, c;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b;
        if(a == b) {
            cout<<0<<" "<<0<<"\n";
        }
        else if(a>b && a-b == 1 || a<b && b-a == 1) {
            cout<<1<<" "<<0<<"\n";
        } 
        else {
            c = 0;
            if(a>b) {
                while(gcd(a,b) != a-b) {
                    a++;
                    b++;
                    c++;
                }
                cout<<a-b<<" "<<c<<"\n";
            }
            else {
                while(gcd(a,b) != b-a) {
                    a--;
                    b--;
                    c++;
                }
                cout<<b-a<<" "<<c<<"\n";
            }
        }
    }
    
    return 0;
}