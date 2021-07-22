#include<iostream>
using namespace std;
#define loopi(s,e) for(int i=s;i<e;i++)

void swap(int arr[],int i,int j){
	int temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
}

void SelectionSort(int arr[],int n){

	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
				min=j;
			}
	if(min!=i)
		swap(arr,min,i);
		
	cout<<i+1<<". ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	
	}
}

int main(){
	
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	SelectionSort(arr,n);
	
	return 0;
}
