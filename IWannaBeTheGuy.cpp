#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    int n, p, q, l, i, j, f = 0;
    vector<int> a;
    cin>>n;
    cin>>p;
    for(i=0; i<p; i++) {
        cin>>l;
        a.push_back(l);
    }
    cin>>q;
    for(i=0; i<q; i++) {
        cin>>l;
        a.push_back(l);
    }
    sort(a.begin(), a.end());

    for(i=1; i<=n; i++) {
        for(j=0; j<p+q; j++) {
            if(i == a[j]) {
                f = 1;
                break;
            }
            else {
                f = 0;
            }
        }
        if(f == 0) {
            break;
        }
    }
    if(f == 0) {
        cout<<"Oh, my keyboard!";
    }
    else {
        cout<<"I become the guy.";
    }

    return 0;
}