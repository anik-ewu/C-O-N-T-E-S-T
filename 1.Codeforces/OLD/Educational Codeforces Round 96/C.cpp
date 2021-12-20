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

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m,x,y,z;

    cin>>t;
    while(t--){
        cin>>n;
        priority_queue< int > even, odd;
        vector < pair < int , int > > vp;
        for(i=1; i<=n; i++){
            if(i%2)odd.push(i);
            else even.push(i);
        }
        while(even.size()+odd.size()>1){
            int szz=0;
            szz+=(even.size()>1);
            szz+=(odd.size()>1);
            if(szz==2){
                a=even.top();
                even.pop();
                b=even.top();
                even.pop();

                x=odd.top();
                odd.pop();
                y=odd.top();
                odd.pop();

                if(a+b>=x+y){
                    odd.push(x);
                    odd.push(y);
                }
                else{
                    even.push(a);
                    even.push(b);
                    a=x;
                    b=y;
                }

            }
            else if(even.size()>1){
                a=even.top();
                even.pop();
                b=even.top();
                even.pop();
            }
            else if(odd.size()>1){
                a=odd.top();
                odd.pop();
                b=odd.top();
                odd.pop();
            }
            else{
                a=even.top();
                b=odd.top();
                even.pop();
                odd.pop();
            }
            c=a+b;
            if(c%2)c++;
            c/=2;
            if(c%2)odd.push(c);
            else even.push(c);
            vp.push_back({a,b});

        }
        if(even.size())cout<<even.top()<<endl;
        else if(odd.size())cout<<odd.top()<<endl;

        for(i=0; i<vp.size(); i++){
            cout<<vp[i].first<<' '<<vp[i].second<<endl;
        }
    }

    return 0;
}

