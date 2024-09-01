#include<bits/stdc++.h>
using namespace std;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve() {

    int len; 
    string s;
    cin>>len;
    cin>>s;

    // check if it is square
    double val = len;
    double tempVal = sqrtl(val);
    long long intVal = tempVal;
    long long mainVal = intVal * intVal;

    if (mainVal < len) {
        cout<<"No"<<endl;
        return;
    }

    int totalOneNeeded = (intVal * 4) - 4;
    int totalOneFound = 0;

    for (int i = 0; i < s.size(); i++) {
        totalOneFound += s[i] - '0';
    }

    if (len == 4) {
        if (totalOneFound == 4) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    else if( totalOneFound == totalOneNeeded) {
            cout<<"Yes"<<endl;
    }
    else {
            cout<<"No"<<endl;
    }

}

int main() {

    int t, a, b;

    cin>>t;

    while (t--) {
        solve();
    }

    return 0;
}