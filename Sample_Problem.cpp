#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        int n, m;
        long long int sum = 0;
        cin >> n >> m;
        int arry[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arry[i];
            sum += arry[i];
        }
        cout <<"Case #" <<l+1 <<": " << sum % m<<endl;
    }

    return 0;
}