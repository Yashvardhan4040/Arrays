
#include <iostream>

using namespace std;

int inspos(int arr[],int x,int n,int pos,int cap)
{
    if(n==cap)
    return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int pos=6;
    int cap=6;
    int x=6;
    cout<<"Array elements before insertion:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    n=inspos(arr,x,n,pos,cap);
    cout<<"Array elements after insertion:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    
}

