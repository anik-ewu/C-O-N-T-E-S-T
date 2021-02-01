///30-12-2020
///Rolling Hash + Bisection

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod   179424673

string s;

ll big_mod(ll b, ll p){
    if(p==0)return 1;
    ll res=big_mod(b,p/2);
    res=(res*res)%mod;
    if(p%2==1) res=(res*b)%mod;
    return res;
}

bool check(int st){
    long long int pow,i,x;
    long long int h_value=0,ans=0,match_value=0;

    int pat_len=st;
    pow=pat_len;
    for(i=st; i>=0; i--){
        x=s[i];
        x*=big_mod(27,pow--);
        h_value=(h_value+(x%mod))%mod;
    }

    pow=st;
    int str_len=s.size();
    int sub=big_mod(27,pow);
    for(i=0; i<str_len; i++){
        if(i<=st){
            x=s[i];
            x*=big_mod(27,pow--);
            match_value=(match_value+(x%mod))%mod;
        }
        else{
            x=s[i-(pat_len+1)];
            x*=sub;
            match_value=((match_value+mod)-(x%mod))%mod;
            match_value=(((match_value*27)%mod)+s[i])%mod;
        }
        if(match_value==h_value)
          return true;
    }
    return false;
}

int bisection(){

    int lo=0;
    int hi=s.size()-1;
    while(hi-lo>=2){
        int mid=(lo+hi)/2;
        if(check(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(check(lo+1))lo++;
    if(check(lo+1))lo++;

    return lo;
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    for(int i=1; i<=T; i++){
        cin>>s;
        int len=bisection();
        for(int i=len; i>=0; i--){
            cout<<s[i];
        }
        cout<<endl;

    }

    return 0;
}
