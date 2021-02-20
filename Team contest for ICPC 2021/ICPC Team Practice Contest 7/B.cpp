#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n,k,i,j;
    vector<int>v;
    string st,st1;
    cin >> n >> k;
    for(i=0; i<n; i++) {
        cin >> st;
        reverse(st.begin(),st.end());
        for(j=0; j<st.size(); j++) {
            if(st[j] == '/')break;
            st1.push_back(st[j]);
        }
        int id = 0;
        reverse(st1.begin(),st1.end());
        for(j=0; j<st1.size(); j++) {
            id = (id*10) + (st1[j] - 48);
        }
        v.push_back(id);
        st1.clear();
    }
    sort(v.begin(),v.end());
    for(i=0; i<k; i++) {
        cout << v[i] << ((i==(k-1)?"":" "));
    }
    cout << "\n";

}

int main() {

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}