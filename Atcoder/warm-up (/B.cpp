#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

int arr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>n;
    cin>>m;
    for(i=1; i<=m; i++){
        cin>>arr[i];
    }
    if(m)sort(arr+1, arr+m+1);
    else{
        cout<<1<<endl;
        return 0;
    }

    vector < int > block;
    if(arr[1]!=1){
        block.push_back(arr[1]-1);
    }

    for(i=2; i<=m; i++){
        if(arr[i]>arr[i-1]+1){
            block.push_back(arr[i]-arr[i-1]-1);
        }
    }
    if(n>arr[m]+1){
        block.push_back(n-arr[m]);
    }

    if(block.size())sort(block.begin(), block.end());

    int tot=0;
    for(i=0; i<block.size(); i++){
        tot+=(block[i]/block[0])+(block[i]%block[0]!=0);
    }
    cout<<tot<<endl;

    return 0;
}

