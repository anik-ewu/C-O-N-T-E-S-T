
From a given string you have to find the length of the minimum substring that satisfies two conditioins.
 1.It should contains1 all the unique characters of the given string at least once.
For example,  for string "aabbcc" the length will be 4 (we can pick the substring abbc, which contains all the unique characters of "aabbcc").

N.b: a substring is a contiguous sequence of characters within a string.The list of all substrings of the string "apple" would be "apple", "appl", "pple", "app", "ppl", "ple", "ap", "pp", "pl", "le", "a", "p", "l", "e", "".

Input:
you will be given a single string S. Length of S will be 1<=|S|<=10^5
Also, s will contain only lowercase characters (a-z).

Output:
Print a single integer, the length of the minimum substring as discussed above.

*/


#include<bits/stdc++.h>
using namespace std;

string s;
int arr[200];
int unique_char = 0;

bool check(int mid){

    memset(arr, 0, sizeof(arr));
    int i = 0;
    int j = 0;
    int cnt = 0;
    while(i<mid){
        if(arr[s[i]]==0){
            cnt++;
        }
        arr[s[i++]]++;
    }
    if(cnt>=unique_char)
        return true;

    while(i<s.size()){
        if(arr[s[i]]==0){
            cnt++;
        }
        arr[s[i++]]++;

        if(arr[s[j]]==1){
            cnt--;
        }
        arr[s[j++]]--;

        if(cnt>=unique_char)
            return true;
    }
    if(cnt>=unique_char)
            return true;
     return false;
}

int main(){

    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(arr[s[i]]==0){
            arr[s[i]]=1;
            unique_char++;
        }
    }

    int lo = 1;
    int hi = s.size();


    while(hi-lo>1){
        int mid = (lo+hi)/2;

        if(check(mid)){
            hi = mid;
        }
        else{
            lo = mid;
        }
    }
    while(check(hi-1)){
        hi--;
    }

    cout<<hi<<endl;




    return 0;
}
