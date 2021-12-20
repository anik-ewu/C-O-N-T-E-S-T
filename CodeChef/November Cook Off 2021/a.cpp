#include<bits/stdc++.h>
using namespace std;

int mp[100005];

int main(){

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t, n;
    cin>>t;

    while(t--) {
        cin>>n;
        memset(mp, 0, sizeof(mp));
        int curr = 1;
        vector< int > v;
        while(n){
            bool flag= true;
            for(int i=0; i<v.size(); i++){
                if(mp[curr-v[i]]==true){
                    flag=false;
                    break;
                }
            }
            if(flag){
                v.push_back(curr);
                mp[curr]=true;
                n--;
            }
            curr++;
        }
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }


    return 0;
}
