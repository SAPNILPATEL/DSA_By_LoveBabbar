// Date:-18/2/22
// Author:-Sapnil Patel

#include <iostream>
using namespace std;

// ***** HOMEWORK QUE -1 :- FIND THE NUMBER OF SET BITS IN TWO NUMBERS.*****

// int setbits(int num)
// {

//     int count = 0;

//     int ans = 0;
//     while (num != 0)
//     {

//         if (num & 1)
//         {
//             count++;
//         }
//         num = num >> 1;
//     }
//     return count;
// }

// int main()
// {

//     int num1,num2;
//     cin >> num1;
//     cin >> num2;

//     int a = setbits(num1);
//     int b = setbits(num2);

//     cout <<"Total number of set bits from both the numbers are : " <<a+b<< endl;
// }

// ***** HOMEWORK QUE -2 :- [1]FIND THE INDEX FROM GIVEN NUMBER OR [2]FIND THE NUMBER FROM GIVEN INDEX. *****

// SOLUTION FOR [1]
// int fibonacci(int num)
// {
//     if (num <= 1)
//     {
//         return num;
//     }

//     int a = 0, b = 1, ans = 1;
//     int index = 1;

//     while (ans < num)
//     {
//         ans = a + b;

//         index++;

//         a = b;
//         b = ans;
//     }

//     return index;
// }

// SOLUTION FOR [2]
int fibonacci(int index)
{
    if(index <= 1)
    {
        return 1;
    }

    return fibonacci(index-1) + fibonacci(index-2);
}

int main()
{
    int result = fibonacci(4);
    cout << result << endl;
    return 0;
}
