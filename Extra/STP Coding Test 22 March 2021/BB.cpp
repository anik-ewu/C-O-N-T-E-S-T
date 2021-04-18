#include<bits/stdc++.h>
using namespace std;
typedef long            long ll;
#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int sz=5000010;

int L,R;
int tree[4 * sz];

void update(int at, int l, int r,int id, int vl){
    if(id<l || id>r)return;
    if(l==r){
        tree[at]=vl;
        cout<<"at "<<at<<' ' <<endl;
        return;
    }
    int mid=(l+r)/2;
    if(id<=mid)update(at*2,l,mid,id,vl);
    else update(at*2+1,mid+1,r,id,vl);
    tree[at]=tree[at*2]+tree[at*2+1];
}

int query(int at, int l, int r){

    if(R<l || r<L)return 0;
    if(L<=l && r<=R){
        return tree[at];
    }
    int mid=(l+r)/2;
    int q1=query(at*2,l,mid);
    int q2=query(at*2+1,mid+1,r);
    
    return q1+q2;
}


int main(){
    
    Fast;   
    read(x); write(x);    
    int n, q, t;
    cin>>q;
    while(q--){
        cin>>t>>n;
        if(t==1){
            L=1;
            R=7;
            cout<< query(1,1,7)<<endl;  
            update(1, 1, n, n, 1);
            L=1;
            R=7;
            cout<< query(1,1,7)<<endl;           
        }
        else{
            //cout<<cal(n)<<endl;
        }
    }


    return 0;
}
