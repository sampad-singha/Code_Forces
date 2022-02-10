#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    for(int l = 0; l < t; l++){
        int r, c;
        cin  >>  r >> c;
        int array[r][c];
        for(int i = 0; i < r; i++) {
            for(int j = 0;j < c; j++) {
                cin >>  array[i][j];
            }
        }
        int count =0, start, end;
        for(int i = 0; i< r; i++) {
            for(int j  = 0; j< c; j++) {
                if(array[i][j] == 1) {
                    start = j;
                    for(int k = j; k< c; k++){
                        if(array[i][k]  == 1) {
                            count++;
                        }else if(array[i][k] != 1) {
                            end = k-1;
                        }
                    }
                    if(count >= 2) {
                        
                    }
                }
            }
        }
    }

    return 0;
}