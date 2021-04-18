#include<bits/stdc++.h>
using namespace std;


#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);

int main(){
    
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    read(x); write(x);
    int t, n, k;
    string s;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n>>k>>s;
        int cnt=0;
        for(int j=0; j<n/2; j++){
            cnt+=(s[j]!=s[n-j-1]);
        }
        int res=abs(cnt-k);
        cout<<"Case #"<<i<<": "<<res<<endl;
    }
    
    
    return 0;
}