#include<bits/stdc++.h>
using namespace std;
bool PalindromeString(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}
int main () {
    int t;
    cin>>  t;
    while(t--) {
        int n, k;
        cin>> n >> k;
        string s;
        cin>> s;
        bool isPal = PalindromeString(s);
        if(k == 0) {
            cout << 1 << endl;
        }else if(isPal) {
            cout << 1 << endl;
        }else {
            cout  << 2 << endl;
        }
    }
    return 0;
}