#include<iostream>
using namespace std;

void nextRound(int arr[],int n,int k){
    int count=0;
     
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]!=0)
            count++;
    }
    cout<<count<<endl;
}

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int arr[n];

    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nextRound(arr,n,k);
}