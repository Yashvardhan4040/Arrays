#include<iostream>
using namespace std;
int equipoint(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int leftsum=0;
        int rightsum =0;
        for(int j=0;j<i;++j)
        {
            leftsum=leftsum+arr[j];
        }
        for(int j=n-1;j>i;--j)
        {
            rightsum=rightsum+arr[j];
        }
        if(rightsum==leftsum)
        return true;
    }
return -1;
}

int main()
{
    int arr[]={2,4,5,1,5};
    int n=5;
    cout<<equipoint(arr,n);
}
