#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int num1, num2, sum;
        string last, secondLast, first, second, stringSum;
        bool finish = false;
        if(s.length() <= 1) {
            cout << s <<endl;
            continue;
        }

        for(int j  = 0; j < s.length() - 1; j++) {
            last = s.at(s.length() - (j+1));
            secondLast = s.at(s.length() - (j+2));
            num1 = stoi(secondLast);
            num2 = stoi(last);
            sum = num1 + num2;

            if(sum >= 10) {
                s[s.length() - (j+2)] = '1';
                num2 = sum % 10;
                last =  to_string(num2);
                s[s.length() - (j + 1)] = last[0];
                finish = true;
                break;
            }
        }
        if(!finish)  {
            last = s.at(s.length() - 1);
            secondLast = s.at(s.length() - 2);
            first = s.at(0);
            second = s.at(1);
            
            num1 = stoi(first);
            num2 = stoi(second);
            int num3 = stoi(secondLast);
            int num4 = stoi(last);
            if(num4 > num2) {
                sum = num1 + num4;
                stringSum = to_string(sum);
                s[0] = stringSum[0];
                s.resize(s.size() - 1);
            }else if(num2 > num4) {
                sum = num1 + num2;
                stringSum = to_string(sum);
                s[0] = stringSum[0];
                s.resize(s.size() - 1);
            }else {
                sum = num1 + num4;
                if(num3 >= num4) {
                    stringSum = to_string(sum);
                    s[0] = stringSum[0];
                    s.resize(s.size() - 1);
                }else {
                    stringSum = to_string(sum);
                    s[1] = stringSum[0];
                    s.erase(0,1);
                }
            }
            finish = false;
        }
        cout << s << endl;

    }
    return 0;
}