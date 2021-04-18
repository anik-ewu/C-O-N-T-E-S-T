///12-April-2021
///Tags: Segment Tree With Lazy Update
///Compress input date to optimize time. For each range update with a new id 1...to n, and finally
///look for unique numbers on the lazy tree


#include<bits/stdc++.h>
using namespace std;
const int N=1e7+5;

int L, R;
int lazy[N*4];
set< int > st;
map< int , int > mp;
vector< pair< int, int > > vp;

void compress(){

    set<int > data;
    for(int i=0; i<vp.size(); i++){
        data.insert(vp[i].first);
        data.insert(vp[i].second);
    }

    int tot=1;
    for(int i: data){
        mp[i]=tot++;
    }
}


void move(int at){
    if(lazy[at]){
        lazy[at*2]=lazy[at*2+1]=lazy[at];
    }
    lazy[at]=0;
}

void update(int at, int l, int r, int col){

    if(R<l || r<L)return;
    if(L<=l and r<=R){
        lazy[at]=col;
        return ;
    }
    move(at);
    int mid=(l+r)/2;
    update(at*2, l, mid, col);
    update(at*2+1, mid+1, r, col);
}

void cnt(int at, int l, int r){
    if(lazy[at]){
        st.insert(lazy[at]);
        return ;
    }
    if(r-l<1)return; // as r>l in the query so don't need to check child nodes
    int mid=(l+r)/2;
    cnt(at*2, l, mid);
    cnt(at*2+1, mid+1, r);
}

void reset(){

    memset(lazy, 0 , sizeof(lazy));
    vp.clear();
    mp.clear();
    st.clear();
}

int main(){

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        reset();
        for(int i=1; i<=n; i++){
            cin>>L>>R;
            vp.push_back({L, R});
            update(1, 1, N, i);
        }
        compress();
        for(int i=0; i<n; i++){
            L=mp[vp[i].first];
            R=mp[vp[i].second];
            update(1, 1, N, i+1);
        }

        cnt(1,1,N);
        cout<<st.size()<<endl;
    }

    return 0;
}
