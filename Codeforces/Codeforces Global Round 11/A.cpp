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

int arr[55];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin >> n;
        int sum=0;
        vector < int > vpos, vneg, vzeros;
        for(i=1; i<=n; i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]>0)vpos.push_back(arr[i]);
            else if(arr[i]<0)vneg.push_back(arr[i]);
            else vzeros.push_back(arr[i]);
        }
        if(sum==0){
            cout<<"NO"<<endl;
            continue;
        }

        vector < int > vp;

        if(sum>0){
            for(i=0; i<vpos.size(); i++)vp.push_back(vpos[i]);
            for(i=0; i<vneg.size(); i++)vp.push_back(vneg[i]);
        }
        if(sum<0){
            for(i=0; i<vneg.size(); i++)vp.push_back(vneg[i]);
            for(i=0; i<vpos.size(); i++)vp.push_back(vpos[i]);
        }
        for(i=0; i<vzeros.size(); i++)vp.push_back(vzeros[i]);

        cout<<"YES"<<endl;
        for(i=0; i<n; i++){
            cout<<vp[i]<<' ';
        }
        cout<<endl;

    }
    return 0;
}

