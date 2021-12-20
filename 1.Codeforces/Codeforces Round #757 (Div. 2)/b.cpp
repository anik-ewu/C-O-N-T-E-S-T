#include<bits/stdc++.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t, n;

    cin>>t;
    while(t--){

        int a;
        priority_queue< pair< int , int > > pq;
        cin>>n;

        for(int i=1; i<=n; i++){
            cin>>a;
            pq.push({a, i});
        }

        int arr[n+5];
        int mid = n/2;
        int x = mid;
        int y = mid;
        arr[0] = mid;
        long long total =  0;
        while(!pq.empty()){
            int pos = pq.top().second;
            arr[pos] = ++x;
            total += (abs(mid - x) *1LL* pq.top().first)*2;
            pq.pop();

            if(!pq.empty()){
                pos = pq.top().second;
                arr[pos] = --y;
                total += (abs(mid - y) *1LL* pq.top().first)*2;
                pq.pop();
            }
        }
        cout<<total<<endl;
        for(int i=0; i<=n; i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }


    return 0;
}

