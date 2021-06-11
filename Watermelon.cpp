#include<iostream>

using namespace std;

int main() {
    int w;
    scanf("%d", &w);
    if(w==2) {
        printf("NO");
    }
    else if(w>=1 && w<=100) {
        if(w%2==0) {
        printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        exit(0);
    }
    return 0;
}