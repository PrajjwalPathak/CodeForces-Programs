#include<iostream>

using namespace std;

int main() {

    long int n, k, i, c = 0, a = 0;
    cin>>n>>k;
    long int w[n];
    for(i=0; i<n; i++) {
        cin>>w[i];
    }

    for(i=0; i<n; i++) {
        while(w[i]>=2*k){
            c++;
            w[i] = w[i] - 2*k;
        }
        while(w[i]>k) {
            c++;
            w[i] = w[i] - k; 
        }
    }

    for(i=0; i<n; i++) {
        if(w[i]>0) {
            a++;
        }
    }
    if(a%2 == 0) {
        cout<<c+(a/2);
    }
    else {
        cout<<c+(a/2)+1;
    }
    
    return 0;
}