#include<iostream>

using namespace std;

int main() {
    int i, j, count=0;
    int a[20];
    string s;
    cin>>s;
    
    if(s.length() == 1) {
        cout<<s;
    }
    else {
        cout<<s.length()<<"\n";
        for(i=0; i<s.length(); i++) {
            if(s[i] == '+') {
                count++;
            }
        }
        cout<<count<<"\n";
        for(i=0; i<s.length(); i++) {
            if(s[i] != '+') {
                for(j=0; j<s.length()-count; j++) {
                
                    a[j] = s[i];
                }
            }
        }
        for(j=0; j<s.length()-count; j++) {
            cout<<a[j]<<" ";
        }
        
        /*int temp;
        for(i=0; i<a.size(); i++) {
            if(a[i]>a[i+1]) {
                temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
            cout<<a[i]<<" ";
        }*/
    }
    
    return 0;
}