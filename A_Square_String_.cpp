#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        bool sqr = false;
        cin >> s;
        if(s.length() % 2 != 0) {
            cout << "NO" <<endl;
        }else {
            int len = s.length() / 2;
            for(int i = 0;  i < s.length(); i++) {
                if(s[i]  != s[i + len]) {
                    break;
                }
                if(i == len-1){
                    sqr = true;
                }
            }
            if(sqr){
                cout << "YES" <<endl;
            }else {
                cout <<"NO" <<endl;
            }
        }
    }

    return 0;
}