#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int j = 0;  j < t; j++){
        int n,k;
        int gVal = 0;
        cin>>  n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < (n/2) ;i++) {
            if(s[i] != s[n-1-i]) {
                gVal++;
            }
        }
        if(k - gVal > 0) {
            cout << "Case #" << j + 1 << ": " << k - gVal << endl;
        }else if (k -gVal < 0) {
            cout << "Case #" << j + 1 << ": " <<  gVal - k << endl;
        }else {
            cout << "Case #" << j + 1 << ": " << 0 << endl;
        }
    }
}