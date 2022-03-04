#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int time = 0,ind1,ind2;
        string key;
        cin>>key;
        string s;
        cin>>s;
        for(int i=1;i<s.length();i++){
            for(int j=0;j<26;j++){
                if(s[i]==key[j]){
                    ind2 = j;
                    break;
                }
            }
            for(int j=0;j<26;j++){
                if (s[i - 1] == key[j])
                {
                    ind1=j;
                    break;
                }
            }
            time += abs(ind2-ind1);
        }
        cout<<time<<endl;
    }
    return 0;
}