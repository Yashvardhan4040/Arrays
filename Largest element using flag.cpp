
#include <iostream>

using namespace std;

int largestele(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {bool flag= true;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>arr[i])
        {flag=false;
          break;
        }
    }
    if(flag==true)
    return arr[i];

}
return -1;
}


int main()
{
    int arr[]={22,67,40,39,88};
    int n=5;
    cout<<largestele(arr,n);
    return 0;
}

