#include<bits/stdc++.h>
using namespace std;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;
int mp[N];

vector<int> getAllDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        memset(mp, 0,  sizeof(mp));
        for (int i = 1; i <= n; i++) {
            cin>>a;
            if (a <= n) {
                mp[a]++;
            }
        }

        int res = 0;
        for (int i = 1; i <= n; i++) {
            vector<int> divisors = getAllDivisors(i);
            int temp = 0;
            for (int j = 0; j < divisors.size(); j++) {
                temp += mp[divisors[j]];
            }
            res = max(res, temp);
        }

        cout<<res<<endl;
    }

    return 0;
}
