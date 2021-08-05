#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int t, n, i, j, pos, min, count;
    cin>>t;
    while(t--) {
        cin>>n;
        int r[n][5];
        for(i=0; i<n; i++) {
            for(j=0; j<5; j++) {
                cin>>r[i][j];
            } 
        }
        if(n == 1) {
            cout<<1<<"\n";
        }
        else {
            int a[5];
            for(j=0; j<5; j++) {
                min = 50000;
                for(i=0; i<n; i++) {
                    if(r[i][j] < min) {
                        min = r[i][j];
                        a[j] = i;
                    }
                } 
            }
            int w[n] = {0};
            for(i=0; i<5; i++) {
                w[a[i]]++;
            }
            int m = *max_element(w, w+n);
            pos = -1;
            count = 0;
            for(i=0; i<n; i++) {
                if(w[i] == m) {
                    pos = i+1;
                    count++;
                }
            }
            if(count == 1) {
                cout<<pos<<"\n";
            }
            else {
                cout<<-1<<"\n";
            }
            
        }
        
    }
    
    return 0;
}