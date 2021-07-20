#include<iostream>

using namespace std;

int main() {
    
    int t, i, a, b, c;
    cin>>t;
    for(i=0; i<t; i++) {
        c = 0;
        cin>>a>>b;
        if(abs(b-a)>10) {
            if(abs(b-a)%10 == 0) {
                c = (abs(b-a)/10);
            }
            else {
                c = (abs(b-a)/10)+1;
            }
            
        }
        else if(a == b){
            c = 0;
        }
        else {
            c = 1;
        }
        cout<<c<<"\n";
    }
    
    return 0;
}