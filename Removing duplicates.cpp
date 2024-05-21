#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int remd(int arr[], int n)
{
    
    if(n==0 || n==1)
    return n;
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        arr[j++]=arr[i];
    }
    arr[j++]=arr[n-1];
    return j;
}












int main()
{
    int arr[]={1,4,3,3,10};
    int n=5;
    cout<<"Array before removal of duplicates:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    n=remd(arr,n);
    cout<<endl;
    cout<<"Array after removal of duplicates:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}




