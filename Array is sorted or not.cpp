#include <iostream>

using namespace std;
bool arraysort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
    
}

int main()

{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int result=arraysort(arr,n);
    if(result==1)
    cout<<"Array is sorted";
    else
    cout<<"Array is not sorted";
}
