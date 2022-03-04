#include<bits/stdc++.h>
using namespace std;
int series(int a,int num){
    double n = num;
    double sum = (n/2)*((2*a)+2*(n-1));
    long long int sum2=sum;
    return sum2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,n;
        cin>>x>>n;
        long long int neg = (n+1)/2 , pos = n/2;
        if(x%2==0){
            // x = x - series(1,neg) + series(2,pos);
            if(n%2==0){
                x+= n/2;
            }
        }else{
            x = x + series(1, neg) - series(2, pos);
        }
        cout<<x<<endl;
    }
    return 0;
}