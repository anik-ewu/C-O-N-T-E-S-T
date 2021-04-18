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
const int               sz =1e1+5;

int arr[501];

void solve(){

    int a,b, n,m, i,j, cnt=0;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i];
        cnt+=(arr[i]>0);
    }

    priority_queue< pair<  int , pair< int , int > > > pq;
    
    for(i=1; i<=n; i++){
        for(j=i+1; j<=n; j++){
            int dif=abs(arr[i]-arr[j]);
            pq.push({dif, {i, j}});
        }
    }

    string s;
    while(!pq.empty() and cnt>=3){
        int a=pq.top().second.first;
        int b=pq.top().second.second;
        pq.pop();

        if(!arr[a] || !arr[b])continue;

        cout<<"? "<<a<<' '<<b<<endl;
        fflush(stdout);
        cin>>s;
        if(s=="Yes"){
            cout<<"! "<<a<<' '<<b<<endl;
            fflush(stdout);
            return ;
        }


        cout<<"? "<<b<<' '<<a<<endl;
        fflush(stdout);
        cin>>s;
        if(s=="Yes"){
            cout<<"! "<<b<<' '<<a<<endl;
            fflush(stdout);
            return ;
        }

    }

    cout<<"! 0 0"<<endl;    
    fflush(stdout);


}

int main(){
    
    Fast;   
    read(x); write(x);

    solve();

    return 0;
}

