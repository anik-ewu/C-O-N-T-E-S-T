#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1e5+5;
#define Fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {

    Fast;
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        vector< string > vs;
        for(int i=1; i<=n; i++){
            cin>>s;
            vs.push_back(s);
        }

        int res=0;
        for(char i='a'; i<='e'; i++){
            priority_queue< int > pq;
            for(int j=0; j<n; j++){
                int a=0, b=0;
                for(int k=0; k<vs[j].size(); k++){
                    if(vs[j][k]==i)a++;
                    else b++;
                }
                pq.push(a-b);
            }
            int sum=0;
            int cnt=0;
            while(!pq.empty()){
                sum+=pq.top();
                pq.pop();
                if(sum<=0)
                    break;
                cnt++;

            }
            res=max(res, cnt);
        }
        cout<<res<<endl;
    }



  return 0;
}
