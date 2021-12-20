#include<bits/stdc++.h>
using namespace std;

int main(){

    for(double i=1; i<=100; i++){
        for(double j=1; j<=100; j++){
            double res=i/j;
            if(abs(res-4.35)<=(0.001)){
                cout<<i <<' '<<j<<endl;
                return 0;
            }
        }
    }

    return 0;
}
