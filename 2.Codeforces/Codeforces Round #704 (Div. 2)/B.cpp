#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              100005

int arr[sz];
int mark[sz];


void solve(){

    int a,b, n,m, i,j;

    vector< int > res;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }

    memset(mark, 0, sizeof(mark));

    i=n;
    j=n;
    while(i>=1 && j>=1){
        while(mark[j] && j)j--;
        stack< int > st;
        while(arr[i]!=j && i){
            st.push(arr[i]);
            mark[arr[i]]=1;
            i--;
        }
        if(i and j){
            res.push_back(arr[i]);
            mark[arr[i]]=1;
            i--;
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

    }


    for(i=0; i<n; i++){
        cout<<res[i]<<' ';
    }
    cout<<endl;

}

int main(){
    Fast;///using Fast I/O
    
    read(x); write(x);

    int multitest=1;
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

