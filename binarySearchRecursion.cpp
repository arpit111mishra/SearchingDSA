#include<iostream>
using namespace std;
void binary(int a[],int si,int ei,int item)
{
    if(si>=ei)
    {
        return;
    }
    int mid=(ei-si)/2;
    if(a[mid]==item)
    {
      cout<<"found";
      return ;
    }
    if(a[mid]>item)
    {
        binary(a,si,mid-1,item);
    }
    else
    {
        binary(a,mid+1,si,item);
    }
}
int main()
{
    int si=0,ei=9;
    int a[]={12,13,14,15,17,23,24,25,265,567};
    binary(a,si,ei,17);
    return 0;
}