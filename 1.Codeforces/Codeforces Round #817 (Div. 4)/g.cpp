#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e7+5;

vector< int > res;
bool used[N];


bool check(int i, int j, int n) {

    memset(used, 0, sizeof(used));

    res.push_back(i);
    res.push_back(j);

    n-=2;

    used[i] = 1;
    used[j] = 1;

    int evenXor = i;
    int oddXor = j;
    int turn  = 1;

    while(n--) {

        if(turn) {
            int cnt = 1000;
            int minVal = INT_MAX;
            while(cnt--) {

              if(used[j]) {
                    j++;
                    continue;
              }

              minVal = min(minVal, j);

              if(evenXor == oddXor) {
                if(n==0) {
                     res.push_back(0);
                     return true;
                } else {
                    res.push_back(j);
                    used[j] = 1;
                    oddXor ^= j;
                }
                break;
              }
              if(evenXor == (oddXor^j)) {
                oddXor ^= j;
                used[j] = 1;
                res.push_back(j);
                break;
              }

              j++;

            }
            if(!cnt) {
                res.push_back(minVal);
                oddXor ^= minVal;
                used[j] = 1;
                j = minVal+1;
            }

        } else {
            int cnt = 100;
            int minVal = INT_MAX;
            while(cnt--) {
              if(used[i]) {
                i++;
                continue;
              }
              minVal = min(minVal, i);
              if(evenXor == oddXor) {
                if(n==0) {
                     res.push_back(0);
                     return true;
                } else {
                    res.push_back(i);
                    used[i] = 1;
                    evenXor = evenXor^i;
                }
                break;
              }
              if((evenXor^i) == oddXor) {
                oddXor ^= i;
                used[i] = 1;
                res.push_back(i);
                break;
              }
               i++;
            }
            if(!cnt) {
                res.push_back(minVal);
                oddXor ^= minVal;
                i = minVal;
                used[i] = 1;
            }
        }

        turn ^= 1;
    }
    return evenXor == oddXor;
}

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;

        bool ok;

        ok = check(1, 2, n);
        if(ok) {
            for(int i=0; i<n; i++){
                cout<<res[i]<<' ';
            }
            cout<<endl;
            continue;
        }

        ok = check(2, 1, n);
        if(ok) {
            for(int i=0; i<n; i++){
                cout<<res[i]<<' ';
            }
            cout<<endl;
            continue;
        }
        cout<<"HI"<<endl;

    }

    return 0;
}
