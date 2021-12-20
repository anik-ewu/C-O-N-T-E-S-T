#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

string s;

int arr[N][30];

int main(){


    Fast;

    int a, b, t, n , m , q;
    cin>>n>>q>>s;

    for(int i=0; i<n; i++){
        if(i==0){
            arr[i][s[i]-'a']++;
        }
        else{
            for(int j=0; j<26; j++){
                arr[i][j]+=arr[i-1][j];
            }
            arr[i][s[i]-'a']++;
        }
    }
    int l, r;
    while(q--){
        cin>>l>>r;
        l--;r--;

        ll x=0, y=0;

        for(int i=0; i<26; i++){
            x+=(arr[r][i])*1LL*(i+1);
        }
        l--;
        if(l>=0){
            for(int i=0; i<26; i++){
                y+=(arr[l][i])*1LL*(i+1);
            }
        }
        cout<<x-y<<endl;
    }



    return 0;
}
