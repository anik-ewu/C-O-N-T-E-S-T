#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    Fast;
    ll a, b, t=1, n , m, k, x, p;
    vector< int > speed;
    vector< int > know;
    cin>>n>>k>>x>>p;

    for(int i=1; i<=n; i++){
        cin>>a;
        speed.push_back(a);
    }
    sort(speed.begin(), speed.end());
    reverse(speed.begin(), speed.end());
    for(int i=1; i<=k; i++){
        cin>>a;
        know.push_back(a);
    }
    queue< int > q;
    for(int i=0; i<k; i++){
        cin>>a;
        q.push(a-know[i]);
    }


    int cnt=0;
    for(int i=0; i<n; i++){
        a=speed[i]*1LL*p;
//        cout<<speed[i]<<' '<<a<<endl;
        if(a>=x)
            cnt++;
        else{
            while(!q.empty()){
                p=q.front();
                q.pop();
                a=speed[i]*1LL*p;
//                cout<<speed[i]<<' '<<a<<endl;
                if(a>=x){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;


    return 0;
}

