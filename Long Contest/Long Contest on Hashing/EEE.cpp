///30-12-2020
///Rolling Hash + Bisection

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod   179424673
#define sz    1000005

string s,p;
int arr[sz], brr[sz];

ll big_mod(ll b, ll p){
    if(p==0)return 1;
    ll res=big_mod(b,p/2);
    res=(res*res)%mod;
    if(p%2==1) res=(res*b)%mod;
    return res;
}

void precal(){

    p=s;
    reverse(p.begin(), p.end());

    long long int pow,i,x;
    long long int h_value1=0;
    long long int h_value2=0;
    pow=s.size()-1;

    for(i=0; i<p.size(); i++){
        x=s[i];
        x*=big_mod(27,pow);
        h_value1=(h_value1+(x%mod))%mod;
        arr[i+1]=h_value1;

        x=p[i];
        x*=big_mod(27,pow--);
        h_value2=(h_value2+(x%mod))%mod;
        brr[i+1]=h_value2;
    }
}

bool check(int pat_len, int n){
    int h_value=(brr[n]-brr[n-pat_len]+mod)%mod;
    int match_val;
    int sub=big_mod(27,pat_len-1);
    for(int i=pat_len; i<=n; i++){
         match_val=arr[i];
         if(i>pat_len){
            int x=s[i-pat_len-1];
            x*=sub;
            match_val=(arr[i]-(x%mod))%mod;
         }
         if(h_value==match_val)return true;

    }
    cout<<"mind the gap"<<endl;
    return false;
}

int bisection(){

    int lo=1;
    int hi=s.size();
    while(hi-lo>=2){
        int mid=(lo+hi)/2;
        if(check(mid,s.size())){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(check(lo+1, s.size()))lo++;
    if(check(lo+1, s.size()))lo++;

    return lo-1;
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    for(int i=1; i<=T; i++){
        cin>>s;
        precal();
        int len=bisection();
        for(int i=len; i>=0; i--){
            cout<<s[i];
        }
        cout<<endl;

    }

    return 0;
}
