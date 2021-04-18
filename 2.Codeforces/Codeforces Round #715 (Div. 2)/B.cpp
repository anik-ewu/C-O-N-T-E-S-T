
#include<bits/stdc++.h>
using namespace std;

#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool check(string s){
    int T=0;
    int M=0;
    bool ok=true;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='T')T++;
        else T--, M++;
        if(T<0)return false;
    }
    return T==M;
}

int main(){

    Fast;
    int  t, n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        bool ok=check(s);
        reverse(s.begin(), s.end());
        if(ok)ok=check(s);
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
