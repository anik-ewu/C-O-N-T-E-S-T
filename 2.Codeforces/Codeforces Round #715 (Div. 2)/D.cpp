#include<bits/stdc++.h>
using namespace std;

#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string res;
vector< string > v;

bool check(string s, string p, int n){
    int j=0;
    for(int i=0; i<s.size(); i++){
        if(j==p.size()){
            res=s;
            return true;
        }
        if(s[i]==p[j])j++;
    }
    int rem=p.size()-j;
    if(rem<=n){
        while(j<p.size())s+=p[j++];
        res=s;
        return true;
    }
    return false;

}

void solve(int n){

    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            if(i==j)continue;
            if(check(v[i], v[j], n)){
                i=4;
                break;
            }
            if(check(v[j], v[i], n)){
                i=4;
                break;
            }

        }
    }
    cout<<res<<endl;
}

int main(){

    Fast;
    int t, n;
    string s;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n;
        v.clear();
        v.push_back("##");
        for(int j=1; j<=3; j++){
            cin>>s;
            v.push_back(s);
        }
        solve(n);
    }
    return 0;
}
