#include<iostream>
using namespace std;
#define loop(i,s,n) for(int i=s;i<n;i++)

void InsertionSort(int arr[],int n){
    loop(i,1,n){
        int current=arr[i];
        int j=i-1;

        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main(){
   int n=5;
       cin>>n;
    int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
    
    InsertionSort(arr,n);
    
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";    

    return 0;
}   
