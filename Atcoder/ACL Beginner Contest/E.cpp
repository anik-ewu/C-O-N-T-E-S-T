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

int arr[20];
int brr[20];
int mark[20];
vector< int > v;

int getInvCount(int n){
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (brr[i] > brr[j])
                inv_count++;

    return inv_count;
}


int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        bool ok=false;
        for(i=0; i<(1<<n); i++){
            memset(mark,0,sizeof(mark));
            for(j=0; j<n; j++){
                if(i&(1<<j)){
                    mark[j]=1;
                }
            }
            int m=0;
            for(j=0; j<n; j++){
                if(mark[j]){
                    brr[m++]=arr[j];
                }
            }
            a=getInvCount(m);

            m=0;
            for(j=0; j<n; j++){
                if(!mark[j]){
                    brr[m++]=arr[j];
                }
            }
           b=getInvCount(m);

           if(a==b){
               ok=true;
               break;
           }

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

