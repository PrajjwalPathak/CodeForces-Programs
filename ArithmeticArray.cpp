#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t, n, i, j, ele, count = 0;
    float sum;
    vector<int> a;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        cin>>n;
        a.clear();
        for(j=0; j<n; j++) {
            cin>>ele;
            a.push_back(ele);
        }
        sum = 0;
        for(j=0; j<a.size(); j++) {
            sum = sum + a[j];
        }
        if(sum/a.size() == 1) {
            count = 0;
        }
        else {
            if(sum>a.size()) {
                count = sum - a.size();
            }
            else {
                count = 1;
            }
        }
        arr[i] = count;
    }
    for(i=0; i<t; i++) {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}