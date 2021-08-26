#include<bits/stdc++.h>
using namespace std;

void CountSort(int arr[],int n){
    //find max in array
    int k=arr[0];
    for(int i=0;i<n;i++)
        k=max(arr[i],k);
    //make count array
    int count[100]={0};    
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    //count position of each element
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    //logic of code
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }

    for(int i=0;i<n;i++)
        arr[i]=output[i];

}


int main()
{
    int arr[]={9,8,7,4,5,6,3,2,1};
    CountSort(arr,9);

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}