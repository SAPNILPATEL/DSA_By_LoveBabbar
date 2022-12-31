#include<iostream>
using namespace std;
int main()
{
    char x = 'a';
    cout<<x<<endl;
    cout<<"Namaste Duniya:-)"<<endl;

    // Type casting

    int s = 'a';
    cout<<s<<endl;

    char ch = 98;
    cout<<ch<<endl;

    // unsigned numbers are always positive. The range of unsigned number is 2^32-1.

    unsigned f = 1233;
    cout<<f<<endl;

    int j = 2/5;   //Because int/int =int
    cout<<j<<endl;

    int c = 2.0/5; //Because float/int = float but we are storing that answer in to c which is int.
    cout<<c<<endl;
    float k = 2.0/5;
    cout<<k<<endl;

    // Operators

    int y = 4;
    int z = 4;
    bool equal = (y==z);
    cout<<equal<<endl;


}