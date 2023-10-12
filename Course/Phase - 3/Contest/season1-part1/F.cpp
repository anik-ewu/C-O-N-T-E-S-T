#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    bool possible = false;
    cin>>n;

    vector<int>arr(2*n, 0);

    for (int i = 0; i < 2*n; i++) {
        cin>>arr[i];
        if ( i == 0) {
            continue;
        }
        else if (arr[i] != arr[i - 1]) {
            possible = true;
        }
    }

    if (possible) {
        sort(arr.begin(), arr.end());
        for (int val: arr) {
            cout<<val<<' ';
        }
        cout<<endl;
    } else {
        cout<<-1<<endl;
    }

    return 0;
}