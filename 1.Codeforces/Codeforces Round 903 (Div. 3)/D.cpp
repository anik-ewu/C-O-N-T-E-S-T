#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

void addDivs(int val, map<int,int>& divs) {
    int i = 2;
    while (i * i <= val) {
        if (val % i == 0) {
            while (val % i == 0)
            {
                divs[i]++;
                val /= i;
            }
        }
        i++;
    }
    if (val > 1) {
        divs[val]++;
    }
}

int main(){

    int a, b, t=1, n , m, val;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int>divs;
        for (int i = 0; i < n; i++) {
            cin>>val;
            addDivs(val, divs);
        }

        bool flag = true;
        for (auto item: divs) {
            if (item.second % n != 0) {
                flag = false;
            }
        }

        cout<<(flag ? "YES" : "NO")<<endl;
    }

    return 0;
}
