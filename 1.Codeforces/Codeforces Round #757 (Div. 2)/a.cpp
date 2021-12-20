#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, l, r, k;

    cin>>t;
    while(t--){

        cin>>n>>l>>r>>k;

        vector<int> v;
        int a;
        for(int i=1; i<=n; i++){

            cin>>a;
            if(a>=l and a<=r)
                v.push_back(a);
        }
        if(v.size()){
            sort(v.begin(), v.end());
        }

        int cnt =0;
        for(int i=0; i<v.size(); i++){
            if(v[i]>k)
                break;
            cnt++;
            k-=v[i];
        }

        cout<<cnt<<endl;



    }


    return 0;
}
