#include<bits/stdc++.h>
using namespace std;
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define sz 200005



int L,R;
int arr[sz];
vector < int > v[4*sz];
struct st{
    int x,y;
}in[sz];

bool cmp(st a, st b){
    return a.x<b.x;
}

void build(int at, int l, int r){

    if(l==r){
        v[at].push_back(in[l].y);
        return ;
    }
    int mid=(l+r)/2;
    build(at*2,l,mid);
    build(at*2+1,mid+1,r);
    merge(v[at*2].begin(),v[at*2].end(),v[at*2+1].begin(),v[at*2+1].end(),back_inserter(v[at]));
}

int query(int at, int l, int r,int k){
    if(l==r){
        return v[at][0];
    }
    int p=upper_bound(v[at*2].begin(),v[at*2].end(),R)-lower_bound(v[at*2].begin(),v[at*2].end(),L);
    int mid=(l+r)/2;
    if(p>=k)
        return query(at*2,l,mid,k);
    else return query(at*2+1,mid+1,r,k-p);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //read(x);
    //write(x);



    int n,t,q,i,k;
    cin>>n>>k;
    for(i=1; i<=n; i++){
        cin>>arr[i];
        in[i]={arr[i],i};
    }
    sort(in+1,in+n+1,cmp);

    build(1,1,n);
    int res=0;
    int pos=(k+1)/2;
    for(i=k; i<=n; i++){
       L=i-k+1;
       R=i;
       int temp=arr[query(1,1,n,pos)];
       if(temp<=res && L-1){
       	L=L-1;
       	temp=arr[query(1,1,n,pos+((R-L)%2))];
       }
       res=max(res, temp);
    }

    cout<<res<<endl;


    return 0;
}
