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
const int               sz =1e5+5;

int n, k;
int arr[1000005];

bool check(int mid){

    int i=mid;
    priority_queue< int > pq;
    pq.push(0);
    for(i=1; i<=mid; i++)pq.push(k);

    for(i=1; i<=n; i++){
        if(pq.top()<arr[i])return false;
        int a=pq.top()-arr[i];
        pq.pop();
        pq.push(a);
    }
    return true;
}

void solve(){

    int a,b, i,j;

    cin>>n>>k;
    for(i=1; i<=n; i++)cin>>arr[i];
    sort(arr+1, arr+n+1);    
    reverse(arr+1, arr+n+1);

    int lo =1; 
    int hi =n;

    while(hi-lo>2){
        int mid=(lo+hi)/2;
        if(check(mid)){
            hi=mid;
        }
        else{
            lo=mid;
        }
    } 
    while(hi and check(hi-1))hi--;

    cout<<hi<<endl;   

}

int main(){
    
    Fast;   
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

