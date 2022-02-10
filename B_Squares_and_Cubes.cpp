#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--){
        int n, count = 0;
        cin>>n;
        cout << (int)sqrt(n) + (int)cbrt(n) - (int)sqrt(cbrt(n)) <<endl;
    }
    return  0;
}