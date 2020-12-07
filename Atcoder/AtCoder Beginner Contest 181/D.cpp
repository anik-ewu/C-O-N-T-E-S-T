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

string s;
int arr[11];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>s;
    if(s.size()<3){
       bool ok=false;
       stringstream ss;
       ss.clear();
       ss<<s;
       ss>>n;
       if(n%8==0){
        ok=true;
       }
       reverse(s.begin(), s.end());
       ss.clear();
       ss<<s;
       ss>>n;
       if(n%8==0){
        ok=true;
       }
       if(ok)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;


    }
    else {

        for(i=0; i<s.size(); i++){
            arr[s[i]-'0']++;
        }
        for(i=1; i<=9; i++){
            for(j=1; j<=9; j++){
                for(k=1; k<=9; k++){
                       int mul=i;
                       mul=(mul*10)+j;
                       mul=(mul*10)+k;
                       queue< int > q;
                       if(arr[i])q.push(i),arr[i]--;
                       if(arr[j])q.push(j),arr[j]--;
                       if(arr[k])q.push(k),arr[k]--;
                       if(mul%8==0 && q.size()==3){
                        cout<<"Yes"<<endl;
                        return 0;
                       }
                       while(!q.empty())arr[q.front()]++,q.pop();


                    }
                }
            }
        cout<<"No"<<endl;
    }


    return 0;
}

