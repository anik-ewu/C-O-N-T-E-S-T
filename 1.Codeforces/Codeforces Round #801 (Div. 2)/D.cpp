#include<bits/stdc++.h>
using namespace std;

int brr[1000];
int n, arr[1000];
void Merge(int l, int mid, int h){
    int i=l;
    int j=mid+1;
    int k=1;
    while(i<=mid && j<=h){
        if(arr[i]<=arr[j]){
            brr[k]=arr[i];
            k++;
            i++;
        }
        else{
            brr[k]=arr[j];
            k++;
            j++;
        }
    }
    if(mid>i){
        while(i<=mid){
            brr[k]=arr[i];
            i++;
            k++;
        }
    }
    else{
        while(j<=h){
            brr[k]=arr[j];
            k++;
            j++;
        }
    }
    for(i=l,k=1; i<=h;i++,k++){
        arr[i] = brr[k];
    }
}

void merge_sort(int l, int h){
    if(l<h){
        int mid=(l+h)/2;
        merge_sort(l,mid);
        merge_sort(mid+1, h);
        Merge(l,mid,h);
    }
}


int main(){
   cin>>n;
   for(int i=1; i<=n; i++){
    cin>>arr[i];
   }
   int l=1,h=n;
   merge_sort(l,h);
   for(int i=1; i<=n; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
