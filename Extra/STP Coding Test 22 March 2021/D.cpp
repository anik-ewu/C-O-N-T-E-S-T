#include<bits/stdc++.h>
using namespace std;
typedef long            long ll;
#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll                inf = 1e9;
const int               mod=1e9+7;
const int               sz =1e1+5;

int arr[2000];

int f(ll n){
	int sum=0;
	while(n){
		sum+=((n%10)*(n%10));
		n/=10; 
	}
	return sum;
}

int main(){
    
    Fast;   
    read(x); write(x);

    ll n, m, num;
    cin>>n;
    num=n;
    while(true){
    	n=f(n);
    	if(n==num || arr[n])break;
    	arr[n]=1;
    }
    if(n==num and n!=1){
    	cout<<"FULL CYCLE"<<endl;
    }
    else if(arr[n] and n!=1){
    	cout<<"PARTIAL CYCLE"<<endl;
    }
    else{
    	cout<<"NO CYCLE"<<endl;
    }

    


    return 0;
}

