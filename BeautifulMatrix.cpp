#include<iostream>

using namespace std;

int posi = 0, posj = 0;

void search(int m[5][5]) {
    int i, j;
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(m[i][j] == 1) {
                posi = i;
                posj = j;
            }
        }
    }
}

int main() {
    int i, j, matrix[5][5], moves = 0;
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    if(matrix[2][2] == 1) {
        cout<<0;
    }
    else {
        search(matrix);
        while(posi != 2) {
            if(posi > 2) {
                posi--;
                moves++;
            }
            else if(posi < 2) {
                posi++;
                moves++;
            }
        }
        while(posj != 2) {
            if(posj > 2) {
                posj--;
                moves++;
            }
            else if(posj < 2) {
                posj++;
                moves++;
            }
        }
        cout<<moves;
    }
    
    return 0;
}