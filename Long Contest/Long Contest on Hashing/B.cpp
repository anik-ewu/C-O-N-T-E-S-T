///Topic : Rolling Hash
///Notes : use multiple hash for better accuracy and look for overflow too

#include<bits/stdc++.h>
using namespace std;
#define mod 179424673

string s, p;

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

void cal(int len){

    long long int pow=len, x, i;
    long long int pref_value=0;
    long long int suff_value=0;

    p="";
    pow=1;
    string temp=s;
    reverse(temp.begin(), temp.end());

    for(i=0; i<=len; i++){
        x=temp[i];
        x*=(big_mod(27, pow++));
        pref_value=(pref_value+(x%mod))%mod;

        if(!i){
            x=temp[i];
            x*=(big_mod(27, 1));
            suff_value=(suff_value+x)%mod;
        }
        else{
            x=temp[i];
            x*=(big_mod(27, 1));
            suff_value=(suff_value*27)%mod;
            suff_value=(suff_value+x)%mod;
        }
        if(suff_value==pref_value){
            p="";
        }
        else{
            p.push_back(temp[i]);
        }


    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int i,n,t=1;
    while(cin>>s){
        cal(s.size()-1);
        cout<<s+p<<endl;
    }

    return 0;
}

