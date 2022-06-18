#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &v,int n,int i){
    // this method take care of parent is max;
    int maxId=i;
    int l=2*i+1;
    int r=2*i+2;
    
    if(l<n && v[l] > v[maxId])
        maxId = l;
    if(r<n && v[r] > v[maxId])
        maxId = r;
    
    if(maxId != i){
        swap(v[maxId],v[i]);    
        
        heapify(v,n,maxId);
    }
}

void HeapSort(vector<int> &v){
    int n = v.size();
    
    for(int i=n/2-1; i>=0;i--)
        heapify(v,n,i);
    
    //Till now in our heap the max element is on the top of the heap;
    // so for sorting we pop top elemet and again call hapify to construct heap again
    // v[0] -->> have max number always bcoz is is on top of max heap;
    for(int i=n-1;i>0;i--){
        swap(v[0],v[i]);
        heapify(v,i,0);
    }
}

int main(){
    int n;
    cin>>n;
    
    vector<int> v(n);
    
    for(int i=0;i<n;i++)    
        cin>>v[i];
        
    for(int i=0;i<n;i++)    
        cout<<v[i]<<" ";
    cout<<endl;
    
    HeapSort(v);
 
    for(int i=0;i<n;i++)    
        cout<<v[i]<<" ";
    
    return 0;
}
