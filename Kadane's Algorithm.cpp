#include<iostream>
using namespace std;
int subsum(int arr[], int n)
{
    int res=arr[0];
    int maxending=arr[0];
    for(int i=1;i<n;i++)
    {
        maxending=max(maxending+arr[i],arr[i]);
        res=max(maxending,res);
    }
    return res;
}
int main()
{
    int arr[]={8,-4,3,-5,4};
    int n=5;
    cout<<"Largest circular subarray sum is:";
    cout<<subsum(arr,n);
}
