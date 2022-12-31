// Author @Sapnil Patel
// Date:-29/11/22
#include<bits/stdc++.h>
using namespace std;


// bool isPresent(int arr[][4],int row,int col,int key)
// {
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             if(arr[i][j]==key)
//                 return true;
//         }
//     }
//     return false;
// }
// int rowWiseSum(int arr[][4],int row,int col)
// {   
//     int sum=0;
//     for(int i=0;i<row;i++)
//     {
//         sum=0;
//         for(int j=0;j<col;j++)
//         {
//             sum+=arr[i][j];
//         }
//         cout<<"Sum of Row "<<i<<" is "<<sum<<endl;
//     }
// }
// int main()
// {
//     int arr[3][4];

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Find whether the given element is present in the array or not :-";
//     cout<<isPresent(arr,3,4,5);
//     cout<<endl;

//     cout<<"The Row wise Sum is : "<<endl;
//     cout<<rowWiseSum(arr,3,4);
//     return 0;
// }

// ******************************* Que:- Rotate Image *******************************
// TC=O(N^2)
// SC=O(N^2)
int main()
{
    int arr[3][3];
    int transpose[3][3];
    // int temp=2;

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin>>arr[row][col];
        }
    }
    int tempRow=0;
    int tempCol=2;
    for(int row=0;row<3;row++)
    {
        tempRow=0;
        for(int col=0;col<3;col++)
        {
            transpose[tempRow][tempCol]=arr[row][col];
            tempRow++;
        }
        tempCol--;
    }
    cout<<"The Transpose matrix is :-"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<transpose[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
