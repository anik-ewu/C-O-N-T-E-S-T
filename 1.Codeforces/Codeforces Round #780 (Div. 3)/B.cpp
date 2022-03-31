#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

int arr[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        priority_queue< int > pq;
        for(int i = 1; i<=n; i++) {
            cin>>a;
            pq.push(a);
        }

        bool flag = true;

        while(!pq.empty()) {
            a = pq.top();
            pq.pop();

            if(pq.empty() && a>1) {
                flag = false;
                break;
            }
            if(pq.empty())
                break;

            b = pq.top();
            pq.pop();

            if(a-b > 1) {
                flag = false;
                break;
            }

            break;

        }

        if(!flag){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }

    }

    return 0;
}
