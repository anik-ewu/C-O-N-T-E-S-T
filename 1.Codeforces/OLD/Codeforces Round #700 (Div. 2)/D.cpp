#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

int arr[sz];
void solve(){

    int a,b, n,m, i,j;
    vector < int > va;
    vector < int > vb;
    cin>>n;
    for(i=1; i<=n; i++)cin>>arr[i];
    j=0;
    va.push_back(arr[1]);
    arr[1]=-1;

    j=2;
    while(j<=n && arr[j]!=va[va.size()-1]){
        va.push_back(arr[j]);
        arr[j]=-1;
        j++;
    }
    int k=j;
    j=0;
    for(i=k-1; i<=n; i++){
     if(arr[i]!=va[j] && i==n){
        va.push_back(arr[i]);
        j++;
        arr[i]=-1;
     }
     if(i<n && arr[i]!=va[j] && arr[i-1]!=arr[i+1]){
        va.push_back(arr[i]);
        j++;
        arr[i]=-1;
     }
    }
    for(i=1; i<=n; i++){
        if(arr[i]!=-1){
            vb.push_back(arr[i]);
        }
      }

    vector < int > vac;
    vector < int > vbc;

    j=0;
    vac.push_back(va[0]);
    for(i=1;  i<va.size(); i++){
        if(vac[j]!=va[i]){
            vac.push_back(va[i]);
            j++;
        }
    }
    if(vb.size()){
        j=0;
        vbc.push_back(vb[0]);
        for(i=1;  i<vb.size(); i++){
        if(vbc[j]!=vb[i]){
            vbc.push_back(vb[i]);
            j++;
        }
      }
    }
    cout<<vac.size()+vbc.size()<<endl;


}

int main(){
    Fast;///using Fast I/O
    int multitest=0;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}
