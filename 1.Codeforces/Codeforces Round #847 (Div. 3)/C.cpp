#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[101][101];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        for (int i = 1; i <= n; i++) {
            for(int j = 1; j < n; j++) {
                cin>>arr[i][j];
            }
        }

        vector<int>res;
        int mark[101] = {0};
        bool taken[101] = {0};

        for (int i = 1; i < n; i++) {
            vector<pair<int,int>>temp;
            for (int j = 1; j <= n; j++) {
                int val = arr[j][i];
                if(taken[val]) {
                    continue;
                }
                mark[val]++;
                if(mark[val] == 1) {
                    temp.push_back({i*-1,val});
                }
            }

            priority_queue<pair<int,pair<int, int>>>pq;
            for (int i = 0; i < temp.size(); i++) {
                pq.push({mark[temp[i].second], {temp[i].first, temp[i].second}});
            }

            while(!pq.empty()) {
                int x = pq.top().second.second;
                pq.pop();
                res.push_back(x);
                taken[x] = 1;
            }
        }

        for (int i = 0; i < res.size(); i++) {
            cout<<res[i]<<' ';
        }
        cout<<endl;

    }

    return 0;
}
