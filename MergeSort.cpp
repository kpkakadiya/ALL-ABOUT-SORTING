#include<iostream>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)

void Merge(int arr[],int l,int mid,int h){
	
	int n1=mid-l+1;
	int n2=h-mid;
	
	int x[n1],y[n2];	
	loop(n1){
		x[i]=arr[l+i];}
	loop(n2){
		y[i]=arr[mid+1+i];}
		
	int i=0;
	int j=0;
	int k=l;
	
	while(i<n1 && j<n2)	{
		
		if(x[i]<y[j]){
			arr[k]=x[i];
			k++;i++;
		}
		else{
			arr[k]=y[j];
			k++;j++;
		}
}
	while(i<n1){
		arr[k]=x[i];
		k++;i++;
	}
	while(j<n2){
		arr[k]=y[j];
		k++;j++;
	}

}

void MergeSort(int arr[],int l,int h){
	if(l<h){
		int mid = (l+h)/2;
		MergeSort(arr,l,mid);
		MergeSort(arr,mid+1,h);
			
		Merge(arr,l,mid,h);
	}
}

int main(){
	int arr[]={5,9,3,2,1};
	
	loop(5)
		cout<<arr[i]<<" ";
	cout<<endl;	
	MergeSort(arr,0,4);
	loop(5)
		cout<<arr[i]<<" ";	
	return 0;
}
