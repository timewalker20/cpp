#include <stdio.h>
int main()
{
   int arr[]={3,41,6,2,4,67,88,23};
   int s;
    printf("enter number");
   scanf("%d",&s);
   for(int i = 0;i<=8;i++){
      if(arr[i]==s){
        printf("element found");
        break;
      }
   }
   printf("element not  found");
}
