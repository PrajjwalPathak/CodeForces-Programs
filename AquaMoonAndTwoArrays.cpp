#include<iostream>
#include<vector>

using namespace std;

bool check(int *a, int n) {
    int i;
    for(i=0; i<n; i++) {
        if(a[i] != 0) {
            return false;
            break;
        }
        else {
            return true;
        }
    }
    return false;
}

int main() {
    
    int t, n, i, j, k;
    
    vector<int> av;
    vector<int> bv;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int co[100] = {0};
        av.clear();
        bv.clear();
        int a[n];
        int b[n];
        int c[n];
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        for(j=0; j<n; j++) {
            cin>>b[j];
        }
        cout<<"\n";
        for(j=0; j<n; j++) {
            if(c[j] != 0) {
                while(c[j]--) {
                    av.push_back(j+1);
                }
            }
        }

        for(j=0; j<av.size(); j++) {
            co[av[j]]++;       
        }
        for(j=0; j<99; j++) {
            for(k=j+1; k<100; k++) {
                if(co[j] == co[k]) {
                    while(co[j]--) {
                        bv.push_back(j);
                    bv.push_back(k);
                    }
                }
            }   
        }


        if(av.size()%2 == 0) {
            cout<<av.size()/2<<"\n";
            for(j=0; j<bv.size(); j = j+2) {
                cout<<bv[j]<<" "<<bv[j+1]<<"\n";
            }
            cout<<"\n";
        }
        else if(check(c,n)) {
            cout<<0;
        }
        else {
            cout<<-1;
        }
    }
    return 0;
}