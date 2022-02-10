#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--) {
        int n, k;
        cin>> n >> k;
        int maxValue = n*k;
        int evs, ods, odtemp = -1,evtemp = 0, indx = 0;
        if(maxValue   % 2 == 0) {
            evs = maxValue / 2;
            ods = evs;
        }else  {
            evs = maxValue / 2;
            ods = evs + 1;
        }
        if(ods % 2 == 0 || ) {
            cout << "YES" << endl;
            int array[k];
            if(k == 1) {
                for(int i = 0; i < n; i++) {
                    cout << i+1 << endl;
                }
            }else {
                for(int j = 0;  j< n; j++) {
                if (ods > 0) {
                    for (int i = 0; i < k-1; i += 2) {
                        array[i] = odtemp + 2;
                        odtemp += 2;
                        array[i + 1] = odtemp + 2;
                        odtemp += 2;
                        indx = i + 2;
                        ods -= 2;
                    }
                }
                for (int i = indx; i < k; i++)
                {
                    array[i] = evtemp + 2;
                    evtemp = array[i];
                    indx  = i;
                }
                for (int i = 0; i < k; i++)
                {
                    cout << array[i] << " ";
                }
                cout << endl;
                indx = 0;
            }
            }
        }else {
            cout << "NO" << endl;
        }
    }

    return 0;
}