#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
#define sz              1000000
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

vector < pair < int , int > >vp;

int arr[sz+10];

bool check(int a, int b){

    int cnt=0;
    while(a>=1 && b>=1){
        if(cnt%2==0){
            a-=b;
        }
        else{
            b-=a;
        }
        cnt++;

    }
    return (a==1 || b==1);

}

int main(){
    Fast;
    int a,b,c, i,j,k, n,m,t, cs=1;

    a=1;
    b=1;
    while(a<=sz &&  b<=sz){
        vp.push_back({a,b});
        c=a;
        a+=b;
        b=c;
    }
    cin>>n;
    queue< int >  q;
    for(i=1; i<=n; i++){
        cin>>a;
        arr[a]=i;
        if(a==1){
            q.push(i);
        }
    }
    if(q.size()>1){
        cout<<q.front();
        q.pop();
        cout<<' '<<q.front()<<endl;
        return 0;
    }

    for(i=1; i<vp.size(); i++){
        a=vp[i].first;
        b=vp[i].second;

        if(arr[a] && arr[b]){
            cout<<arr[b]<<' '<<arr[a]<<endl;
            return 0;
        }
    }
    cout<<"impossible"<<endl;



    return 0;
}
