#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              10001

int arr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>n;
    i=1;
    j=2;
    int len=n;
    while(n-- && j<=len){
        cout<<'?'<<' '<<i<<' '<<j<<endl;
        cin>>a;
        fflush(stdout);

        cout<<'?'<<' '<<j<<' '<<i<<endl;
        cin>>b;
        fflush(stdout);

        if(a>b){
            arr[i]=a;
            i=j;
            j++;
        }
        else{
            arr[j]=b;
            j++;
        }
    }
    for(i=1; i<=len; i++){
        if(arr[i]==0)arr[i]=len;
    }

    cout<<"!";
    for(i=1; i<=len; i++){
        cout<<' '<<arr[i];
    }
    cout<<endl;

    return 0;
}

