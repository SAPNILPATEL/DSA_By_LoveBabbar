#include <iostream>
using namespace std;
int main()
{
    /*  int a;
    cout<<"Enter a : ";
    a=cin.get();    //cin.get() is always convert the value in ASCII value whether it is in char or in int.
    cout<<"a = "<<a<<endl;
    // cin>>a;
  */

    // Homework output question
    //Que-2
    /*   int a=2;
        int b = a+1;
        if((a=3)==b)
        {
            cout<<a<<"a"<<endl;
        }
        else
        {
            cout<<a+1;
        }
   */

    //Que-3
    /*    int a=24;

        if(a>20)
        {
            cout<<"LOVE"<<endl;
        }
        else if(a==24)
        {
            cout<<"LOVELY"<<endl;
        }
        else
        {
            cout<<"BABBAR"<<endl;
        }
        cout<<a;
  */

    //CLASS WORK

    //Que-1:-Do the some of all numbers by while loop.
    /* int n,sum=0,i=1;
    cout<<"Enter the n : ";
    cin>>n;
    
    while(i<=n)
    {
        sum += i;
        i+=1;
    }
    cout<<"The sum is : "<<sum<<endl;
  */

    //Que-2:-FInd that the given number is prime or not.

    /* 
    int n,i=2;
    cout<<"Enter the number : ";
    cin>>n;

    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"The number is not Prime."<<endl;
            break;
        }
        else
        {
            cout<<"The number is Prime."<<endl;
            break;
        }
        i = i+1;
    }
    */

    //Que-3
    /*  int i=0,n;
    cout<<"Enter the n : ";
    cin>>n;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<" * ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
*/
    //Que-4
    /*
    int i = 1, n;
    cout << "Enter the n : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;   //OR we can write j=1;
        while (j <= n)
        {
            cout <<" "<<i<<" ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
*/

    // HOMEWORK

    ///Que-1
    /*
    char n;
    cin>>n;
    if (n >= 'A' && n <= 'Z')
    {
        cout << "The alphabet is in uppercase." << endl;
    }
    else if (n >= 'a' && n <= 'z')
    {
        cout << "The alphabet is in lowercase." << endl;
    }
    else if(n >= '1' && n <= '9')
    {
        cout<<"The entered number is alphabet."<< endl;
    }
    */
    //Que-2

    /*
    int n,i=1,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    while(i<=n)
    {
        if((i%2)==0)
        {
            sum+=i;
        }
        i+=1;
    }
    cout<<"The sum of even number is : "<<sum<<endl;
    */

    //Que-3:-Convert Fahrenheit to celcius.
    /*
    float fahrenheit;
    cout<<"Enter the fahrenheit : ";
    cin>>fahrenheit;

    float celcius = (fahrenheit-32)*(5.0/9.0);
    cout<<"The Temperature in celcius is : "<<celcius;
    */
}