#include<bits/stdc++.h>
using namespace std;

#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

vector< string > v;

void solve(int n){

    string s="";
    int i=0, j=0, k=0;
    while(i<n and j<n and k<n){
        if(v[0][i]==v[1][j]){
            s+=v[0][i];
            i++;j++;
        }
        else if(v[0][i]==v[2][k]){
            s+=v[0][i];
            i++;
            k++;
        }
        else{
            s+=v[1][j];
            j++;
            k++;
        }
    }
    priority_queue< pair< int , char > > pq;
    pq.push({i, 'i'});
    pq.push({j, 'j'});
    pq.push({k, 'k'});

    pq.pop();
    if(pq.top().second=='i'){
        while(i<n)s+=v[0][i++];
    }
    else if(pq.top().second=='j'){
        while(j<n)s+=v[1][j++];
    }
    else{
        while(k<n)s+=v[2][k++];
    }

    cout<<s<<endl;

}

int main(){

    Fast;
    int t, n;
    string s;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n;
        v.clear();
        for(int j=1; j<=3; j++){
            cin>>s;
            v.push_back(s);
        }
        solve(n*2);
    }
    return 0;
}
