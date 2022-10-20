#include<bits/stdc++.h>
using namespace std;

#define pi pair < int, int>
#define ps pair < string, int>
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


bool cmpAda(ps x, ps y) {
    if(x.first == y.first) {
        return x.second < y.second;
    }
    return x.first < y.first;
}
bool cmpCharles(pi x, pi y) {
    if(x.first == y.first) {
        return x.second < y.second;
    }
    return x.first < y.first;
}

int main() {

    Fast;

    string s;
    int t, n, d, id;

    cin>>t;
    for(int ts=1; ts<=t; ts++) {
        cin>>n;
        vector< pair< string, int > > ada;
        vector< pair< int, int > > charles;
        for(int j=1; j<=n; j++) {
            cin>>s>>d>>id;
            ada.push_back({s,id});
            charles.push_back({d, id});
        }

        sort(ada.begin(), ada.end(), cmpAda);
        sort(charles.begin(), charles.end(), cmpCharles);

        int count = 0;
        for(int i=0; i<n; i++) {
            if(ada[i].second == charles[i].second)
                count++;
        }
        cout<<"Case #"<<ts<<": "<<count<<endl;
    }

    return 0;
}
