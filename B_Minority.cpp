#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int ones = 0, zeros = 0;
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '0')
            {
                zeros++;
            }
            else if (s[j] == '1')
            {
                ones++;
            }
        }
        if(zeros > ones) {
            cout << ones <<endl;
        }else if (ones > zeros) {
            cout << zeros <<endl;
        }else {
            cout << ones - 1 <<endl;
        }
    }
    return 0;
}