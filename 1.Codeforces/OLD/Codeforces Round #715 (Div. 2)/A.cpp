#include<bits/stdc++.h>
using namespace std;

#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

    Fast;
    int  t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector< int > even, odd;
        for(int i=1; i<=n; i++){
            int a;
            cin>>a;
            if(a%2)odd.push_back(a);
            else even.push_back(a);
        }
        for(int i=0; i<odd.size(); i++)cout<<odd[i]<<' ';
        for(int i=0; i<even.size(); i++)cout<<even[i]<<' ';
        cout<<endl;
    }







    return 0;
}
