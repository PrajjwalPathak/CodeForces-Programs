#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int t, n, count, i, a, b, c, d, e, m, f, j;
    string str;
    string s = "";
    
    cin>>t;
    while(t--) {
        cin>>n;
        count = 0;
        s = "";
        f = 0;
        int arr[n] = {0};
        int k = 0;
        while(n--) {
            a = 0, b = 0, c = 0, d = 0, e = 0;
            
            cin>>str;
            s = s + str;
            
            for(i=0; i<s.length(); i++) {
                if(s[i] == 'a') {
                    a++;
                }
                else if(s[i] == 'b') {
                    b++;
                }
                else if(s[i] == 'c') {
                    c++;
                }
                else if(s[i] == 'd') {
                    d++;
                }
                else if(s[i] == 'e') {
                    e++;
                }
            }
            m = max(a,max(b,max(c,max(d,e))));
            if(m > (a+b+c+d+e-m)) {
                arr[k]++;
                k++;
            }
            else {
                arr[k] = 0;
                k++;
            }
            
            for(j=n-1; j>=0; j--) {
                if(arr[j] == 1) {
                    count = j+1;
                    break;
                }
            }
            
        }
        for(j=n-1; j>=0; j--) {
            cout<<arr[j];
        }
        cout<<count<<"\n";
    }
    
    return 0;
}