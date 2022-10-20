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

    string s;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        cin>>s;

        priority_queue<int>pq;

        long long int sum = 0;
        for(int i=0; i<n; i++) {
            int l = i;
            int r = n-(i+1);

            if(s[i]=='L'){
                sum += l;
                pq.push(r-l);
            } else {
                sum += r;
                pq.push(l-r);
            }
        }

        while(!pq.empty()) {
            int x = pq.top();
            pq.pop();
            sum = max(sum, sum+x);
            cout<<sum<<' ';
        }
        cout<<endl;
    }

    return 0;
}
