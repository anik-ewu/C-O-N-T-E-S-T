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

int arr[600];
int brr[600];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        memset(brr, 0, sizeof(brr));
        for(i=1; i<=n; i++){
            cin>>arr[i];
            brr[arr[i]]=1;
        }
        bool ok=true;
        for(i=1; i<=n; i++){
            if(brr[i]==0){
                ok=false;
                break;
            }
        }


        bool flag=false;
        for(i=2; i<=n; i++){
            if(arr[i]<arr[i-1]){
                flag=true;
            }
        }
        if(ok && flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }



    return 0;
}

