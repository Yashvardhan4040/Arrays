#include<iostream>
using namespace std;

void freq(int arr[], int n)
{
    bool counted[n] = {false}; // Initialize an array to keep track of counted elements

    for(int i = 0; i < n; i++)
    {
        if (counted[i]) // Skip elements that have already been counted
            continue;

        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                counted[j] = true; // Mark the element as counted
            }
        }
        cout << "Frequency of " << arr[i] << " is : " << count << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements you want in the array: ";
    cin >> n;
    int arr[n]; // Declare the array after getting the size

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    freq(arr, n);
    return 0;
}
