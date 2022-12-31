// Date:-20/2/22
// Author:-Sapnil Patel

//***** SWAP THE ALTERNATE ELEMENTS IN ARRAY *****

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void SwapAlternateElements(int arr1[], int n)
// {
//     for(int i=0; i<n ; i += 2)
//     {
//         if ((i+1)<n)
//         {
//             // swap(arr1[i],arr1[i+1]);   //This is shortcut method
//             int temp = arr1[i];
//             arr1[i] = arr1[i+1];
//             arr1[i+1] = temp;
//         }
//     }
// }

// void printArray(int arr1[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr1[i]<<" ";
//     }
// }

// int main()
// {
//     int arr1[7] = {1,2,3,4,5,6,9};

//     SwapAlternateElements(arr1,7);

//     printArray(arr1,7);
//     cout<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        // If we reached here that means  arr[left] == 1, arr[right] == 0.

        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortOne(arr, 8);
    printArray(arr, 8);
    return 0;
}

// // ***** HOMEWORK QUE -1 :- Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.******

// class Solution
// {
// public:
//     bool uniqueOccurrences(vector<int> &arr)
//     {
//         vector<int> ans;
// 		int size= arr.size();

// 		for(int i=0; i<size; i++) {
// 			int temp = arr[i];
// 			int count = 0;
// 			if (temp != INT_MIN) {

// 				for(int j=i; j<size; j++) {
// 					if( temp == arr[j] ) {
// 						count++;
// 						arr[j]=INT_MIN;
// 					}
// 				}
// 				ans.push_back(count);
// 			}
// 		}

// 		int ansSize = ans.size();
// 		for (int k=0; k<ansSize; k++) {
// 			int cal=0;
// 			for( int m=0; m<ansSize; m++) {
// 				if( ans[k]==ans[m]) {
// 					cal++;
// 				}
// 			}
// 			if(cal>1) {
// 				return false;
// 			}
// 		}
// 		return true;
//     }
// };

// int main()
// {
//     Solution s;
//     vector<int>arr = {10,20,10,30,30,30};
//     s.uniqueOccurrences(arr);
// }

// ****** Que-2:- Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant extra space *****

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         int ans = 0;

//         for( int i=0 ;i<nums.size();i++)
//         {
//             ans = ans^nums[i];
//         }
//         return ans;
//     }
// };

// int main()
// {
//     Solution s;

//     vector<int> nums;

//     nums.push_back(10);
//     nums.push_back(20);
//     nums.push_back(30);
//     cout<<s.findDuplicates(nums)<<endl;
// }

void sort012(int *arr, int n)
{
    int low = 0;

    int high = n - 1;

    int mid = 0;

    while (mid <= high)
    {

        switch (arr[mid])
        {

        case 0:

            swap(arr[low++], arr[mid++]);

            break;

        case 1:

            mid++;

            break;

        case 2:

            swap(arr[mid], arr[high--]);

            break;
        }
    }
}
