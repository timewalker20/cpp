#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int low , int high){
    int pivot= arr[high];
    int j=low-1;
    for( int i = low; i <=high ; i++)
    {
    if(arr[i]<pivot){
        j++;
       int temp=arr[j];
       arr[j] = arr[i];
       arr[i]= temp; 
    }
    }
    int temp=arr[j+1];
    arr[j+1] = arr[high];
    arr[high]= temp; 
    
    return (j+1);
}

void Quick(int arr[],int low,int high){
    if(low<high){
    int pi=partition(arr,low,high);
    Quick(arr,low,pi-1);
    Quick(arr,pi+1,high);
    }
}

int main()
{
    std::cout << "hii" << std::endl;
    int arr1[]={10, 80, 30, 90, 40};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    Quick(arr1,0,n-1);
    for(int i=0;i<n;i++)
  {
    cout<<arr1[i]<<" ";
  }
  return 0;
}
