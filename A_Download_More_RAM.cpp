#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>> t;
    for (int i = 0;  i < t;  i++) {
        int n,k;
        cin >> n >> k;
        int need[n], gain[n];
        for(int j  = 0; j < n; j++) {
            cin >> need[j];
        }
        for(int j = 0; j < n;  j++ ) {
            cin>> gain[j];
        }
        int min = 0;
        for(int j = 0; j < n; j++) {
            int temp = INT_MAX, pos;
            for(int k  = 0; k < n; k++) {
                if(need[k] <= temp && need[k] > 0) {
                    temp = need[k];
                    pos = k;
                }
            }
            if(temp <= k) {
                k += gain[pos];
                need[pos] = -1;
            }
        }
        cout << k <<endl;
    }
    return 0;
}