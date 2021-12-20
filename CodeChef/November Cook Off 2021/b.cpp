#include<bits/stdc++.h>
using namespace std;

int mp[100005];

int main(){

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t, n, a;
    cin>>t;

    while(t--) {
        cin>>n;
        int remZero = 0;
        int remOne = 0;
        int remTwo = 0;
        for(int i = 1; i <=n; i++) {
            cin>>a;
            remZero += (a%3 == 0);
            remOne += (a%3 == 1);
            remTwo += (a%3 == 2);
        }

        int res = -1;

        if(remZero == n){
            res = 0;
        }
        else if(remOne and !remTwo){
            if(remOne%3 == 0){
                res = remOne - (remOne/3);
            }
        }
        else if(!remOne and remTwo){
            if(remTwo%3 == 0){
                res = remTwo - (remTwo/3);
            }
        }
        else {

            res = min(remOne, remTwo);
            remOne -= res;
            remTwo -=res;

            res += remOne - (remOne/3);
            res += remTwo - (remTwo/3);
            if(remOne%3 != 0 || remTwo%3 !=0){
                res = -1;
            }
        }

        cout<<res<<endl;
    }


    return 0;
}

