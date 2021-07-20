#include<iostream>

using namespace std;

int main() {

    int n, m, c, summ = 0, sumc = 0;
    cin>>n;
    while(n--) {
        cin>>m>>c;
        if(m > c) {
            summ++;
        }
        else if(c > m) {
            sumc++;
        }
        else {
            continue;
        }
    }
    if(summ > sumc) {
        cout<<"Mishka";
    }
    else if(summ == sumc) {
        cout<<"Friendship is magic!^^";
    }
    else {
        cout<<"Chris";
    }
        
    return 0;
}