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

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>n>>c;

    queue< pair< int, int > > q;
    set< int > st;
    q.push({n,0});
    st.insert(n);
    int ans=1;

    while(!q.empty()){
        k=q.front().first;
        int cost=q.front().second;
        cout<<k<<' '<<cost<<endl;
        q.pop();
        if(st.find(k*-1)==st.end() && cost+1<=c){
            q.push({k*-1, cost+1});
            ans++;
            cost++;
            st.insert(k*-1);
        }
        if(st.find(k-1)==st.end() && cost+2<=c){
            q.push({k-1, cost+1});
            st.insert(k-1);
            ans++;
        }
    }
    cout<<st.size()<<endl;









    return 0;
}

