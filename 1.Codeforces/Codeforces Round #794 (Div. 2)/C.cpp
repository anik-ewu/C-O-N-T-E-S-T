#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;

        vector< int > v;
        for(int i = 1;  i<=n; i++){
            cin>>a;
            v.push_back(a);
        }

        if(n%2){
            cout<<"NO"<<endl;
            continue;
        }

        sort(v.begin(), v.end());

        int arr[n+5];
        int i = 0;
        int j = n/2;
        int index = 1;
        while(j<n) {
            arr[index++] = v[i++];
            arr[index++] = v[j++];
        }

        bool flag = true;
        for(int i = 2; i<=n; i+=2){
            if(i<n && (arr[i]<=arr[i-1] || arr[i]<=arr[i+1])){
                flag = false;
            }
            else if(i==n && (arr[i]<=arr[i-1] || arr[i]<=arr[1])){
                flag = false;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i++){
                cout<<arr[i]<<' ';
            }
            cout<<endl;
            continue;
        }

        reverse(v.begin(), v.end());

        i = 0;
        j = n/2;
        index = 1;
        while(j<n) {
            arr[index++] = v[i++];
            arr[index++] = v[j++];
        }

        for(int i = 2; i<=n; i+=2){
            if(i<n && (arr[i]>=arr[i-1] || arr[i]>=arr[i+1])){
                flag = false;
            }
            else if(i==n && (arr[i]>=arr[i-1] || arr[i]>=arr[1])){
                flag = false;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i++){
                cout<<arr[i]<<' ';
            }
            cout<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
