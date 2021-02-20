#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              200005

int arr[sz];

void solve(){

    int a,b, n,m,k, i,j;
    priority_queue< int >pq;

    cin>>n>>k;
    for(i=1; i<=n; i++){
        cin>>arr[i];
        if(i<=k){
            pq.push(-arr[i]);
        }
    }

    int ans=0;
    int val;
    int len=(k+1)/2;
    for(i=k+1; i<=n; i++){
        if(pq.size()<k){
            pq.push(-arr[i]);
            continue;
        }

        val=pq.top()*-1;
        if(arr[i]>val){
            pq.pop();
            pq.push(-arr[i]);
        }
        else{
            int cnt=0;
            while(!pq.empty()){
                val=pq.top()*-1;
                pq.pop();
                cnt++;

                if(cnt==len){
                    ans=max(ans, val);
                }
            }
        }
    }
    if(pq.size()>=k){
        int cnt=0;
        while(!pq.empty()){
            val=pq.top()*-1;
            pq.pop();
            cnt++;

            if(cnt==len){
                ans=max(ans, val);
            }
        }
    }

    cout<<ans<<endl;

}

int main(){
    Fast;///using Fast I/O

    //read(x);
    //write(x);

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

