#include<bits/stdc++.h>
using namespace std;


#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


const int mod=1e9+7;
vector< string > vs;
int main(){

    freopen("in.txt", "r", stdin);

    Fast;
    int t, n, k;
    string s;
    long long res=1;
    long long temp,zero, one, x;
    for(int i=1; i<=5; i++){
        cin>>s;
        zero=one=x=0;
        for(int i=0; i<100; i++){
            one+=(s[i]=='1');
            zero+=(s[i]=='0');
        }
        temp=(zero*one)%mod;
        x=(one*(one-1))/2;
        temp=(temp*x)%mod;
        res=(res*temp)%mod;
    }
    x=(100*99)/2;
    for(int i=1; i<=5; i++){
        res=(res*x)%mod;
    }
    cout<<res<<endl;


    return 0;
}

