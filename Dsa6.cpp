#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int count = 0;
        int diff_bits = start ^ goal;
        cout<<diff_bits<<endl;
        
        while(diff_bits != 0)
        {
            // diff_bits = diff_bits & (diff_bits - 1);
            // count ++;

            int bit=diff_bits%10;
            if(bit==1) count++;
            cout<<bit<<" : "<<count<<endl;
            diff_bits/=10;
        }
       
        return count;
    }
};

int main()
{
    //***** CONVERTION FROM DECIMAL TO BINARY *****

    
    // int n;
    // cin>>n;
    // int ans = 1, i = 0;

    // while( n != 0 )
    // {
    //     int bit = n & 1;

    //     ans =  ( bit * pow(10,i)) + ans ;

    //     n = n>>1;      //Or n=n/2
    //     i++;
    // }
    // cout<<"The Answer is : "<<ans<<endl;

    //***** CONVERSION FROM BINARY TO DECIMAL *****

    // int n;
    // cin>>n;
    // int ans = 0, i = 0;

    // while ( n != 0 )
    // {
    //     // int digit = n % 10;   // OR 
    //     int digit = n & 1 ;
    //     if( digit == 1)
    //     {
    //         ans = ans + pow(2,i);
    //     }
    //     n = n/10;
    //     i++;
    // }
    // cout<<"Ans = "<<ans<<endl;

    Solution s;

    // cout<<s.minBitFlips(011,100);

    vector<int>sap;
    sap.push_back(-1);
    sap[0]=5;
    cout<<sap[0];
    


}