#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              5005

int ans[sz];
int brr[sz];
int crr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>n>>m;
    priority_queue< pair < int , int > > pq;
    for(i=1; i<=n; i++){
        cin>>a;
        pq.push({a,i});
    }
    for(i=1; i<=m; i++)cin>>brr[i];
    for(i=1; i<=m; i++)cin>>crr[i];

    for(i=1; i<=n; i++){

        int cap=pq.top().first;
        int pos=pq.top().second;
        pq.pop();

        int cost=INT_MAX;
        int id=0;
        for(j=1; j<=m; j++){
            if(brr[j]>=cap && cost>crr[j]){
                id=j;
                cost=crr[j];
            }
        }

        if(id==0){
            cout<<"impossible"<<endl;
            return 0;
        }
        brr[id]=-1;
        crr[id]=INT_MAX;
        ans[pos]=id;

    }
    for(i=1; i<=n; i++){
        if(i>1)cout<<' ';
        cout<<ans[i];
    }
    cout<<endl;



    return 0;
}

