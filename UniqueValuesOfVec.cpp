#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    int brr[4] = {1, 2, 5, 6};
    vector<int> ans;
    for (int i = 0; i < 3; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        ans.push_back(brr[i]);
    }

    sort( ans.begin(), ans.end() );
    ans.erase( unique( ans.begin(), ans.end() ), ans.end() );

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}