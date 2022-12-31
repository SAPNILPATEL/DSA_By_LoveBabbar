#include <iostream>
using namespace std;
int main()
{
    //SHIFT OPERATOR

    //  cout<<(21<<2)<<endl;

    // MCQ OUTPUT
    //Que-1
    /*
    int a,b=1;
    a=10;
    if(++a)
    {
        cout<<b;
    }
    else
    {
        cout<<++b;
    }
    */

    //Que-2
    /*
    int a = 1;
    int b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage1 Inside If";
    }
    else
    {
        cout << "Stage2 Inside If";
    }
    cout<<a<<" "<<b<<endl;
    */

    //Que-3
    /*
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage1 Inside If";
    }
    else
    {
        cout << "Stage2 Inside If";
    }
    cout<<a<<" "<<b<<endl;
    */

    // FIBONACCI SERIES
    /*
    int n = 10;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for (int i = 1; i <= n; i++)
    {
        int NextNumber = a+b;
        cout<<NextNumber<<" ";

        a = b;
        b = NextNumber;
    }
    */

    // CONTINUE
    /*
    for(int i = 0; i<5 ; i++)
    {
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue;   //Portion below continue is unreachable.because from continue control goes to condition 
                    //check (i++). and then restart for loop.
        cout<<"I am Sapnil"<<endl;
    }
   */

    // HOMEWORK OUTPUT QUESTION
    //Que-1
    /*
    for (int i = 0; i <= 5 ; i--)
    {
        cout<<i<<" ";
        i++;
    }
    */

    //Que-2

    /*
    for(int i=0; i<=15;i++)
    {
        cout<<i<<" ";
        if(i&1)
        {
            continue;
        }
        i++;
    }
    */

    // CLASSWORK QUE

    //Que-1:- Given an integer number , return the difference between the product of its digits and the sum of its digits.(LEETCODE-EASY)
    /*
    int product = 1;
    int sum = 0;
    int n;
    cin>>n;

    while(n!=0)
    {
        int digit = n%10 ;
        sum = sum + digit ;
        product = product * digit ;

        n = n/10;
    }

    int answer = product - sum;
    cout<<answer<<endl;
    // return answer;
    */

    //Que-2:-Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the hamming weight).

    // int count = 0;
    // int n;
    // cin>>n;
    // while(n!=0)
    // {
    //     if(n&1)
    //     {
    //         count++;
    //     }
    //     n = n>>1;
    // }
    // cout<<count<<endl;
}