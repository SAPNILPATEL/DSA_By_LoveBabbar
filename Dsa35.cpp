// Author:-Sapnil Patel
// Date:-15/07/2022
// Merge Sort

#include <bits/stdc++.h>
using namespace std;

int counter = 0;

void merge(int *arr, int l, int r)
{
    counter++;
    int mid = (l + r) / 2;

    int len1 = mid - l + 1;
    counter++;
    int len2 = r - mid;
     counter++;

    int *first = new int[len1];
    counter++;
    int *second = new int[len2];
    counter++;

    int mainArrayIndex = l;

    // For copying left subarray into first

    for (int i = 0; i < len1; i++)
    {
        counter++;
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    // For copying right subarray into second

    for (int i = 0; i < len2; i++)
    {
        counter++;
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted array

    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = l;
     counter++;

    while (index1 < len1 && index2 < len2)
    {
        counter++;
        if (first[index1] <= second[index2])
        {
            counter++;
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            counter++;
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        counter++;
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        counter++;
        arr[mainArrayIndex++] = second[index2++];
    }
    //Now Delete the Dynamically allocated memory.
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int l, int r)
{
    counter++;
    if (l >= r)
        return;

    int mid = (l + r) / 2;

    // sort left subpart
    counter++;
    mergeSort(arr, l, mid);

    // sort right subpart
    counter++;
    merge(arr, mid + 1, r);

    counter++;
    merge(arr, l, r);
}

int main()
{
    int n = 5;
    int arr[n] = {25,23,17,14,11};
    cout<<"Unsorted Array :-";
    for(int i=0;i<n;i++)
    {
        counter+=9;
        cout<<arr[i]<<" ";
    }cout<<endl;

    mergeSort(arr, 0, n - 1);

    cout<<"Sorted Array :-";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
    cout<<"Counter : "<<counter<<endl;
    cout << endl;
}

