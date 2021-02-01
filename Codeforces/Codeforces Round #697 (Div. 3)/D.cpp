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

ll arr[sz];
int brr[sz];

void solve(){

    ll i, n, m ,sum=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)cin>>arr[i];
    for(i=1; i<=n; i++)cin>>brr[i];

    priority_queue< ll > p, q, pinv;

    for(i=1; i<=n; i++){
        if(brr[i]==2){
            q.push(arr[i]);
        }
        else{
            p.push(arr[i]);
        }
        sum+=arr[i];
    }
    if(sum<m){
        cout<<-1<<endl;
        return;
    }

    int ans=0;
    while(m>0){
        if(p.size() and p.top()>=m){
            ans++;
            pinv.push(-p.top());
            m-=p.top();
            p.pop();
            break;
        }
        if(p.size() and q.size()){
          if(p.top()>q.top()){
            ans++;
            m-=p.top();
            pinv.push(-p.top());
            p.pop();
          }
          else if(p.size()>=2){
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            int c=q.top();
            ans+=2;
            if(a+b>=c){
                m-=(a+b);
                pinv.push(-a);
                pinv.push(-b);
            }
            else{
                m-=c;
                p.push(a);
                p.push(b);
                q.pop();
            }
          }
          else{
            m-=q.top();
            ans+=2;
            q.pop();
          }

        }
        else if(p.size()){
            ans++;
            m-=p.top();
            pinv.push(-p.top());
            p.pop();
        }
        else{
            ans+=2;
            m-=q.top();
            q.pop();
        }
    }
    if(m){
        m=m*-1;
    }
    while(pinv.size()){
        int a=pinv.top()*-1;
        pinv.pop();
        if(a>m){
            break;
        }
        m-=a;
        ans--;
    }

    cout<<ans<<endl;
}

int main(){
    Fast;///using Fast I/O
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

