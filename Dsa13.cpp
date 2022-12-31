// Date:-4/3/22
// Author:-Sapnil Patel
// 1.Binary Search
// 2.First and Last Occurrence

// #include <bits/stdc++.h>
// using namespace std;

// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size-1;
//     int mid = start+(end-start)/2;

//     while(start<=end)
//     {
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(arr[mid]>key) //Then Search in the left subpart
//         {
//             end = mid-1;
//         }
//         else if(arr[mid]<key) //Then Search in the right subpart
//         {
//             start = mid+1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return -1;
// }
// int main()
// {
//     int even[6]={1,3,6,9,12,15};
//     int odd[5]={5,6,9,13,19};

//     cout<<"The index of 12 is : "<<binarySearch(even,6,12)<<endl;
//     cout<<"The index of 6 is : "<<binarySearch(odd,5,6)<<endl;

// }

// // ******************** First and Last Occurrence *************************

// #include <bits/stdc++.h>
// using namespace std;

// int firstOcc(int arr[], int size, int key)
// {
//     int start = 0 ;
//     int end = size - 1;
//     int mid = start + (end-start)/2;
//     int ans = - 1;

//     while(start <= end)
//     {
//         if(arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (key > arr[mid])   //Search int the Right subpart
//         {
//             start = mid + 1;
//         }
//         else if (key < arr[mid])    //Search int the Left subpart
//         {
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
//     return ans;
// }
// int lastOcc(int arr[], int size, int key)
// {
//     int start = 0 ;
//     int end = size - 1;
//     int mid = start + (end-start)/2;
//     int ans = - 1;

//     while(start <= end)
//     {
//         if(arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (key > arr[mid])   //Search int the Right part
//         {
//             start = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
//     return ans;
// }

// int main()
// {
//     int even[5] = {1,2,3,3,5};

//     cout<<"First Occurrence is : "<<firstOcc(even, 5 , 3)<<endl;
//     cout<<"Last Occurrence is : "<<lastOcc(even, 6 , 3)<<endl;

//     return 0;
// }

// *****************Find the missing term in Sequence(In Logarithmic Time)*******************

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// Function to find a missing term in a sequence
int findMissingTerm(int nums[], int n)
{
    // search space is nums[low…high]
    int low = 0, high = n - 1;

    // calculate the common difference between successive elements
    int d = (nums[n - 1] - nums[0]) / n;

    // loop till the search space is exhausted
    while (low <= high)
    {
        // find the middle index
        int mid = high - (high - low) / 2;
        // check the difference of middle element with its right neighbor
        if (mid + 1 < n && nums[mid + 1] - nums[mid] != d)
        {
            return nums[mid + 1] - d;
        }

        // check the difference of middle element with its left neighbor
        if (mid - 1 >= 0 && nums[mid] - nums[mid - 1] != d)
        {
            return nums[mid - 1] + d;
        }

        // if the missing element lies on the left subarray, reduce
        // our search space to the left subarray nums[low…mid-1]
        if (nums[mid] - nums[0] != (mid - 0) * d)
        {
            high = mid - 1;
        }

        // if the missing element lies on the right subarray, reduce
        // our search space to the right subarray nums[mid+1…high]
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main(void)
{
    int nums[] = {5, 10, 15, 20, 30};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout<<"The Given Array is :- ";
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    printf("The missing term is %d", findMissingTerm(nums, n));

    return 0;
}
