#include<iostream>

using namespace std;

int main() {
    
    int t, i, xa, ya, xb, yb, xf, yf, xp, yp, f;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>xa>>ya;
        cin>>xb>>yb;
        cin>>xf>>yf;
        xp = abs(xb-xa);
        yp = abs(yb-ya);
        f = 0;
        if((((xa == xf) && (xb == xf))) && (((yf > ya) && (yf < yb)) || ((yf > yb) && (yf < ya)))) {
            f = 1;
        }
        else if((((ya == yf) && (yb == yf))) && (((xf > xa) && (xf < xb)) || ((xf > xb) && (xf < xa)))) {
            f = 1;
        }
        else {
            f = 0;
        }
        if(f == 1) {
            cout<<xp+yp+2<<"\n";
        }
        else {
            cout<<xp+yp<<"\n";
        }
    }
    
    return 0;
}