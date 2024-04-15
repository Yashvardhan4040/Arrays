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
int overall(int arr[], int n)
{
    int normalsubsum=subsum(arr,n);
    if(normalsubsum<0)
    return normalsubsum;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        arr[i]=-arr[i];
    }
    int circular=sum+subsum(arr,n);
    return max(normalsubsum,circular);
}

int main()
{
    int arr[]={8,-4,3,-5,4};
    int n=5;
    cout<<"Largest circular subarray sum is:";
    cout<<overall(arr,n);
}
