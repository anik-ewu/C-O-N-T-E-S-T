#include<bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int testCases, n, a;
    cin>>testCases;

    while(testCases--) {

        cin>>n;
        int shift_right = 0;
        for(int i = 1; i <= n; i++) {
            cin>>a;
            if(a == i+shift_right){
                shift_right++;
            }
        }

        cout<<shift_right<<endl;
    }




    return 0;
}
