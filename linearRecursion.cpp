#include<iostream>
#include<vector>
using namespace std;
void Search(int a[],int n,int item)
{  
    if(n<0)
      return;
    if(a[n-1]==item)
    {
      cout<<"found";
      return; 
     }
       Search(a,n-1,item);
}  
int main()
{
    int a[]={32,54,56,23,64,23,65};
    Search(a,7,32234);
    return 0;
}