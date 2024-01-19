#include <iostream>
using namespace std;
int main()
{
    int arr[]={3,41,6,2,4,67,88,23};
    for (int i = 0; i <8; i++)
    {
       for (int j =0; j < 8; j++)
       {
         if(arr[j]<arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
       }
     
    }
       cout<<"sort array";
       for (int i = 0; i <8; i++)
       {
        /* code */
        cout<<arr[i]<<" ";
       }
    
    return 0;
}
