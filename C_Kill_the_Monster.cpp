#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        long long int hc, dc, hm, dm;
        cin >> hc >> dc >> hm >> dm;
        long long int k, w, a;
        cin >> k >> w >> a;
        long long int thc, tdc, rnd;
        bool isPossible = false;

        rnd = hm / dc;
        if (hm % dc == 0) {
            rnd--;
        }
        if (hc - ((double)rnd * dm) > 0)
        {
            cout << "YES" << endl;
            isPossible = true;
        }
        else
        {
            for (int j = 0; j <= k; j++) {
                thc = hc + (a * (k - j));
                tdc = dc + (w * j);

                rnd = hm / tdc;
                if (hm % tdc == 0) {
                    rnd--;
                }

                if (thc - ((double)rnd * dm) > 0)
                {
                    cout << "YES" << endl;
                    isPossible = true;
                    break;
                }
            }
        }
        if(!isPossible) {
            cout << "NO" << endl;
        }
    }

    return 0;
}