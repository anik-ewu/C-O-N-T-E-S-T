#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

int cal(int l, int r , int a, int b){

    while(r-l>1){
        int mid=(l+r)/2;
        int c=(a/mid);
        if(c>=b){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    for(int i=l; i>1; i--){
        int c=(a/i);
        if(c<=b){
            l=i;
        }
        else return l;
    }
    return l;

}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    priority_queue < int > pq;

    cin>>n>>k;
    for(i=1; i<=n; i++){
        cin>>a;
        pq.push(a);
    }

    if(n==1){
        a=pq.top();
        pq.pop();
        int cut=k;
        int rem=a%cut;
        int val=a/cut;
        for(i=1; i<=cut; i++){
            if(rem){
                pq.push(val+1);
                rem--;
            }
            else
                pq.push(val);
        }
    }


    while(pq.size()<k){

        a=pq.top();
        pq.pop();
        b=pq.top();
        int l=2,r=pq.size()-n+1;
        int cut=cal(l,r,a,b);
        int rem=a%cut;

        int val=a/cut;
        for(i=1; i<=cut; i++){
            if(rem){
                pq.push(val+1);
                rem--;
            }
            else
                pq.push(val);
        }
    }

    ll sum=0;

    while(!pq.empty()){
        ll mul=pq.top();
        sum+=(mul*1LL*mul);
        pq.pop();
    }
    cout<<sum<<endl;


    return 0;
}

