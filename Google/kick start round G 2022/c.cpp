#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 4e5+5;

int arr[N];

ll subArraySum(vector<int>subArray) {
    ll sum = 0;
    int n = subArray.size();

    for (int i=0; i<n; i++)
        sum += (subArray[i] * (i+1) * (n-i));

    return sum;
}

ll negativeSubArraySum(vector<int>subArray) {
    ll sum = 0;
    int n = subArray.size();
    vector<int>negativeSubarray;
    int negativeValues = 0;

    for(int i=0; i<n; i++) {
        if(subArray[i] <= 0) {
            negativeSubarray.push_back(subArray[i]*-1);
            negativeValues++;
        }
        else if(subArray[i] > 0 || i+1 == n) {
            if(negativeValues) {
                sum += subArraySum(negativeSubarray);
                negativeValues = 0;
            }
        }
    }
    if(negativeValues) {
        sum += subArraySum(negativeSubarray);
        negativeValues = 0;
    }
    return sum;
}

int main(){

    Fast;

    int a, b, t=1, n , m, caseCounter = 1;
    cin>>t;
    while(t--){

         cin>>n;
         for(int i=1; i<=n; i++) {
            cin>>arr[i];
         }

         ll sumsOfHappySubarrays = 0;

         int prefixSum = 0;
         vector<int> subArray;
         for(int i=1; i<=n; i++) {
            prefixSum += arr[i];

            if(prefixSum < 0) {

              if(subArray.size()){
                sumsOfHappySubarrays += subArraySum(subArray);
                sumsOfHappySubarrays += negativeSubArraySum(subArray);
              }
              prefixSum = 0;
              subArray.clear();
            } else {
                subArray.push_back(arr[i]);
            }
         }
         if(subArray.size()){
            sumsOfHappySubarrays += subArraySum(subArray);
            sumsOfHappySubarrays += negativeSubArraySum(subArray);
         }

         cout<<"Case #"<<caseCounter++<<": "<<sumsOfHappySubarrays<<endl;
    }

    return 0;
}

