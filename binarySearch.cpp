#include<iostream>
using namespace std;
void binary(int a[],int n,int item)
{
      int m;
      int l=0,u=n-1;
      while(l<=u)
      {
        m=(l+u)/2;
        if(item==a[m])
        {
           cout<<"item found at"<<m+1<<endl;
           return;
        }
        else if(item>a[m])
        {
            l=m+1;
        }
        else
        {
            u=m-1;
        }
      }
      cout<<"not found";
}
int main()
{
    int a[]={1,4,5,7,12,45,65,78,89,90,100,110,135};
    int item=12;  //element to be searched
    binary(a,13,item);
    return 0;
}