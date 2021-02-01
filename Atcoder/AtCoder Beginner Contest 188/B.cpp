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

double arr[sz];
double brr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i]>>brr[i];
    }
    int cnt=0;

    for(i=1; i<n; i++){
        for(j=i+1; j<=n; j++){
            double slope=(brr[j]-brr[i])/(arr[j]-arr[i]);
            if(slope>=-1 and slope<=1)cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}

