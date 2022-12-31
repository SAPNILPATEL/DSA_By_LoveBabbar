// Author:-Sapnil Patel
// Date:-15/07/2022
// Quick Sort

#include<bits/stdc++.h>
using namespace std;

int counter = 0;

int partition(int arr[],int s,int e)
{
    counter++;
    int pivot = arr[s];

    int cnt=0;

    for(int i=s+1;i<=e;i++)
    {
        counter++;
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = s+cnt;
    counter++;

    // The right position of Pivot Index
    swap(arr[pivotIndex],arr[s]);
    counter++;

    // Now, Lets sort left subpart and right subpart
    int i=s, j=e;

    while(i<pivotIndex && j>pivotIndex)
    {
        counter++;
        while(arr[i]<=pivot)
        {
            i++;
            counter++;
        }
        while(arr[j]>pivot)
        {
            j--;
            counter++;
        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
            counter++;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e)
{
    counter++;
    // Basecase
    if(s>=e)
        return;

    // For Partition
    counter++;
    int p = partition(arr,s,e);
    

    // sort the left part
    counter++;
    quickSort(arr,0,p-1);
    

    // sort the right part 
    counter++;
    quickSort(arr,p+1,e);
    
}

int main()
{
    int n=5;
    int arr[n]={19,15,13,12,11};
    cout<<"Unsorted Array :-";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    quickSort(arr,0,n-1);

    cout<<"Sorted Array :-";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Counter : "<<counter<<endl;

    return 0;
}

