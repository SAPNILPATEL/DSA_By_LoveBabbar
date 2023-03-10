// Date:-19/2/22
// Author:-Sapnil Patel

// ***** REVERSE THE ARRAY ELEMENTS *****

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[5] = {1,2,3,4,5};

    reverse(arr1,6);
    reverse(arr2,5);

    printArray(arr1,6);
    cout<<endl;
    printArray(arr2,5);
    return 0;
}
