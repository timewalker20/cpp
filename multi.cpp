#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int arr2[3][3];
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"array two";
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr2[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j]=arr[i][j]*arr[i][j];
        }
        
    }

       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        
    }


    
    
    return 0;
}
