#include <bits/stdc++.h>
using namespace std;

int main()
{
  int anshul[11];
  int anhish[11];
  int n1=0;
  int n2=0;
  int p1=0;
  int p2=0;
  for(int i=0;i<=9;i++){
     if(i%2==0){
      int temp;
      cout<<"number for anshul \n";
      cin>>temp;
      int sum = temp + n1;
      n1=temp;
      if(sum%2==0){
        p1++;
      }
      // cin>>anshul[n1];
      // n1++;
     }
    else{
      int temp2;
      cout<<"number for anshish \n";
      cin>>temp2;
      int sum2 = temp2 + n1;
      n2=temp2;
       if ((sum2& 3) == 0){
        p2++;
       }
    }
  }
    if(p1>p2){
      cout<<"anshul is winner";
    }
    else{
      cout<<" anshish is winner";
    }
  
  // for (int i = 0; i < 11; i++) {     
  //      cout<<anhish[i];   
  //   }   
  //   cout<<'\n';
  // for (int i = 0; i < 11; i++) {     
  //      cout<<anhish[i];   
  //   }   
}
