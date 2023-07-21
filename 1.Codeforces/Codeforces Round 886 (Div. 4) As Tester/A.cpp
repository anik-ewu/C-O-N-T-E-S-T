#include<bits/stdc++.h>
using namespace std;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int a, b, c, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>a>>b>>c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }


    }

    return 0;
}
