#include<bits/stdc++.h>
using namespace std;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string color;
int arr[200005];
int mark[200005];

int F(int i, int n) {
    int cnt = 0;
    stack<int>st;

    while(mark[i] == -1) {
        cnt += color[i - 1] == '0';
        st.push(i);
        mark[i] = 0;
        i = arr[i];
    }

    while (!st.empty()) {
        int val = st.top();
        st.pop();
        mark[val] = cnt;
    }

    return cnt;

}

void solve() {

    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
        mark[i] = -1;
    }
    cin>>color;

    for (int i = 1; i <= n; i++) {
        if (mark[i] == -1) {
            mark[i] = F(i, n);
        }
    }

    for(int i = 1; i <= n; i++) {
        cout<<mark[i]<<' ';
    }
    cout<<endl;
}

int main() {

    Fast;
    int t;
    cin>>t;

    while (t--) {
        solve();
    }

    return 0;
}