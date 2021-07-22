#include<iostream>
using namespace std;
#define loopj(n) for(int j=0;j<n;j++)
#define loopi(n) for(int i=0;i<n;i++)
void swap(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void BubbleSort(int arr[],int n){
	
	loopi(n-1){
		loopj(n-1-i){
			if(arr[j]>arr[j+1])
				swap(arr,j+1,j);
		}
	}
}

int main(){
	int arr[]={9,5,1,2,3,6,4,7,8};
	
	loopi(9)
		cout<<arr[i]<<" ";
	cout<<endl;	
	BubbleSort(arr,9);
	
	loopi(9)
	cout<<arr[i]<<" ";

	return 0;
}
