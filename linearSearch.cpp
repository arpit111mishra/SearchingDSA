#include<iostream>
using namespace std;
void Search(int a[],int n,int item)
{
    for(int i=0;i<n;i++)
    {
         if(a[i]==item)
         {
            cout<<"found";
            return;
         }
    }
}
int main()
{
int a[]={34,65,23,65,34,75,435,76,534};
int item =23;
Search(a,9,item);
}