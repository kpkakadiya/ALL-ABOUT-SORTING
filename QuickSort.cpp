#include<iostream>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
void swap(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

int Partition(int arr[],int l,int h){
	
	int pivot = arr[l];
	int i=l;
	int j=h;
	while(i<j){
		while(arr[i] <= pivot){i++;}
		while(arr[j] > pivot){j--;}
		if(i<j){
			swap(arr,i,j);
		}
	}
	swap(arr,j,l);
	return j;
}

void QuickSort(int arr[],int l,int h){
	
	if(l<h){
		int pivot=Partition(arr,l,h);
		
		QuickSort(arr,l,pivot-1);
		QuickSort(arr,pivot+1,h);	
	}
}

int main(){
	int arr[]={90,80,70,60,50,40,30,20,10};
	
	loop(9)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	QuickSort(arr,0,9);
	loop(9)
		cout<<arr[i]<<" ";
	return 0;
}
