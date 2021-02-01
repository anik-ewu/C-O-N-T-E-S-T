///Topic : Rolling Hash
///Notes : use multiple hash for better accuracy and look for overflow too
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


bool flag;
string s, pat;


int big_mod(long long int base, long long int power){
    if(power==0)
        return 1;
    else if(power%2==1){
        long long int p1 = base % mod;
        long long int p2 = (big_mod(base,power-1))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0){
        long long int p1 = (big_mod(base,power/2))%mod;
        return (p1*p1)%mod;
    }
}

void find_ans(int n){
    long long int pow,i,x;
    long long int h_value=0,ans=0,match_value=0;

    int pat_len=pat.size();
    pow=pat_len-1;

    for(i=0; i<pat_len; i++){
        x=pat[i];
        x*=big_mod(27,pow--);
        h_value=(h_value+(x%mod))%mod;
    }

    pow=pat_len-1;
    int str_len=s.size();
    int sub=big_mod(27,pow);
    for(i=0; i<str_len; i++){
        if(i<pat_len){
            x=s[i];
            x*=big_mod(27,pow--);
            match_value=(match_value+(x%mod))%mod;
        }
        else{
            x=s[i-pat_len];
            x*=sub;
            match_value=((match_value+mod)-(x%mod))%mod;
            match_value=(((match_value*27)%mod)+s[i])%mod;
        }
        if(match_value==h_value)
          cout<<(i-n+1)<<endl, flag=true;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int i,n,t=1;
    while(cin>>n>>pat>>s){
        if(t>1)cout<<endl;
        flag=false;
        find_ans(n);
        if(!flag)cout<<endl;
        t=2;
    }

    return 0;
}
