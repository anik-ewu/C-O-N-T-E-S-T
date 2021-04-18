#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =1e5+5;

int arr[301], brr[301];

void solve(){



}

int main(){

    //Fast;
    //read(x); write(x);

    int t, a,b, n,m, i,j;
    cin>>t;
    for(j=1; j<=t; j++){
        cin>>n;
        int res=0;
        for(i=1; i<=n; i++)cin>>arr[i];
        for(i=1; i<=n; i++)cin>>brr[i];
        for(i=1; i<=n; i++)res=res^(brr[i] - arr[i] -1);
        cout<<"Case "<<j<<": ";
        if(res){
            cout<<"white wins"<<endl;
        }
        else{
            cout<<"black wins"<<endl;
        }
    }

    return 0;
}

