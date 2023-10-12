#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        int temp;
        double val;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin>>val;
            temp = sqrt(val);

            if (temp * temp != val) {
                flag = false;
            }
        }

        cout<<(!flag ? "YES" : "NO")<<endl;

    }

    return 0;
}