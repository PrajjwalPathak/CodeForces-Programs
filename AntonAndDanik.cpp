#include<iostream>

using namespace std;

int main() {

    int n, i = 0, a = 0, d = 0;
    string s;
    cin>>n;
    cin>>s;
    while(n--) {
        if(s[i] == 'A') {
            a++;
        }
        else if(s[i] == 'D') {
            d++;
        }
        i++;
    }
    if(a > d) {
        printf("Anton");
    }
    else if(a < d){
        printf("Danik");
    }
    else {
        printf("Friendship");
    }
    
    return 0;
}