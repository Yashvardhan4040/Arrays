#include<iostream>
using namespace std;
bool ws(int arr[], int n, int k, int sum)
{
   int e;
   int s=0;
   int curr=0;
   for(e=0;e<n;e++)
   {
      curr=curr+arr[e];
      while(curr>sum)
      {
          curr=curr-arr[s];
          s++;
      }
     if(curr==sum)
     return true;
   }
   return false;
}
int main()
{
    int arr[]={9,3,5,4,7,2,4,2,9,4};
    int n=10,k=4,sum=151;
    cout<<ws(arr,n,k,sum);
}
