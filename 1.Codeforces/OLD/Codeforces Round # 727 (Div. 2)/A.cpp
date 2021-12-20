#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[30];
string s;
int main(){

    int a, b, t, n , m;
    cin>>t;
    while(t--){
        cin>>n>>s;
        memset(arr, 0, sizeof(arr));
        bool ok=true;
        for(int i=0; i<n; i++){
            if(arr[s[i]-'A']){
                ok=false;
            }
            arr[s[i]-'A']=1;
            int j=i+1;
            while(j<n and s[j]==s[i])j++;
            i=j-1;
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }




    return 0;
}
