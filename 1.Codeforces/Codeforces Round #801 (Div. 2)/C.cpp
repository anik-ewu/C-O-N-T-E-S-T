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

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>m;
        int arr[n+5][m+5];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>arr[i][j];
            }
        }

        queue< pair< int , pair< int, int > > >q;
        map< pair<int,int>, int>mp;
        q.push({1,{1, arr[1][1]}});

        bool flag = false;

        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second.first;
            int val = q.front().second.second;
            if(x==n and y==m and val==0) {
                flag = true;
                break;
            }
            q.pop();

            if(x+1<=n) {
                int xx = x+1;
                int yy = y;
                int vv = val+arr[xx][yy];
                q.push({xx, {yy, vv}});

            }
            if(y+1<=m){
                int xx = x;
                int yy = y+1;
                int vv = val+arr[xx][yy];
                q.push({xx, {yy, vv}});
            }
        }

        if(!flag){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
