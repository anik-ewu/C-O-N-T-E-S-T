#include<bits/stdc++.h>
using namespace std;
#define size 200005
typedef long long int ll;
int arr[size+5];
int lazy[4 * size];

ll sum;
int L,R;

int digitSum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll update( int node , int l, int r) {
    if(r<L || l>R) /// outside of the range
        return 0;

    if(l>=L and r<=R)  ///total overlap
    {
        if(lazy[node] > 7) {
            return 0;
        }
        for (int i = l; i <=r ; i++) {
            arr[i] = digitSum(arr[i]);
        }
        lazy[node]++;
        return 0;
    }

    int left=node*2;
    int right=(node*2)+1;
    int mid=(l+r)/2;

    update(left,l,mid);
    update(right,mid+1,r);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,a,b,i,q,key,val, idx;

    cin>>t;
    for(i=1; i<=t ; i++) {
        cin>>n>>q;
        memset(lazy,0,sizeof(lazy));

        for (int i = 1; i <=n; i++) {
            cin>>arr[i];
        }

        while(q--) {
            cin>>key;
            if(key==1) {
                cin>>L>>R;
                update(1,1,n);
            }
            else {
                cin>>idx;
                cout<<arr[idx]<<endl;
            }
        }
    }
    return 0;
}
