#include<iostream>
#include<cmath>

using namespace std;

int main() {

    long long int n;
    int d, four = 0 , seven = 0;
    cin>>n;
    d = log10(n)+1;
    while(d--) {
        if(n%10 == 4) {
            four++;
        }
        else if(n%10 == 7) {
            seven++;
        }
        n = n/10;
    }
    if(four+seven == 4 || four+seven == 7) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}