#include <bits/stdc++.h>
using namespace std;
int t;
long long int z;

bool isPrime(long long int q){
    long long int i=2;
    for(i=2; (i*i)<=q; i++){
        if(q%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    scanf("%d", &t);
    int cs=0;
    while(t--){
        scanf("%lld", &z);
        long long int above=sqrt(z);
        while(above*above<z){
            above++;
        }
        while(!isPrime(above)){
            above++;
        }
        long long int below=sqrt(z);
        while(below*below>=z){
            below--;
        }
        while(!isPrime(below)) below--;
        if(above*below<=z){
            printf("Case #%d: %lld\n", ++cs, above*below);
        }
        else{
            above=below;
            below--;
            while(!isPrime(below)) below--;
            printf("Case #%d: %lld\n", ++cs, above*below);
        }
    }
    return 0;
}
