#include <iostream>
using namespace std;

int main()
{
    // CLASSWORK

    /*Que-1 , output= 1 2 3
                      1 2 3
                      1 2 3 */
    /*
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<" "<<j<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    */

    /*Que-2 , output = 3 2 1
                       3 2 1
                       3 2 1 */
    /*
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<" "<<n-j+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    */

    /*Que-3 , output = 1 2 3
                      4 5 6
                      7 8 9 */
    /*
    int i=0,n;
    cin>>n;
    int count = 1;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<" "<<count<<" ";
            count++;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    */
    /*Que-4 , output = *
                       * *                     
                       * * *     */
    /*
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<" * ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    */

    /*Que-5 , output = 1
                       2 2                    
                       3 3 3     */
    /*
    int i = 1, n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout <<" "<<i<<" " ;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    */

    /*Que-6 , output = 1
                       2 3                   
                       4 5 6
                       7 8 9 10     */
    /*
    int i = 1, n;
    cin >> n;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout <<" "<<count<<" " ;
            j += 1;
            count++;
        }
        cout << endl;
        i += 1;
    }
    */

    /* Another approach to solve que-6 (without using count variable) , output = 1
                                                                                2 3                   
                                                                                3 4 5
                                                                                4 5 6 7     */
    /*
    int i = 1, n;
    cin >> n;
    while (i <= n)
    {    
        int j = 1;
        while (j <= i)
        {
            cout <<" "<<i+j-1<<" " ;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    */

    /*Que-7 , output = 1
                          2 1
                          3 2 1
                          4 3 2 1     */
    /*
    int i = 1, n;
    cin >> n;
    while (i <= n)
    {
        int count = i;
        int j = 1;
        while (j <= i)
        {
            cout <<" "<<count<<" " ;
            count--;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    /*

    /* Another approach to solve que-7 (without using count variable) , output = 1
                                                                                 2 1                   
                                                                                 3 2 1
                                                                                 4 3 2 1     */
    /*
    int i = 1, n;
    cin >> n;
    while (i <= n)
    {    
        int j = 1;
        while (j <= i)
        {
            cout <<" "<<i-j+1<<" " ;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    */

    /*Que-8 , output =  A A A
                        B B B
                        C C C  */

    /* int i = 1 , n ;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */

    /*Que-9 , output =  A B C
                        A B C
                        A B C  */
    /*
    int i = 1 , n ;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout<<" "<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */

    /*Que-11 , output =  A B C
                         B C D
                         C D E  */
    /*
    int i = 1 , n ;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'-n+(i+j+1);   //OR ch = 'A'+i+j-2;
            cout<<" "<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */

    /*Que-12 , output =  A 
                         B B 
                         C C C  */
    /*
    int i = 1 , n ;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<" "<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */

    /*Que-13 , output =  A 
                         B C 
                         D E F  */
    /*
    int i = 1 , n ;
    cin>>n;
    int count = 0;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+count;
            cout<<" "<<ch<<" ";
            count++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */
    /*Que-14 , output =  A 
                         B C 
                         C D E 
                         D E F G  */
    /*
    int i = 1 , n ;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i+j-2;
            cout<<" "<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */

    /*Que-15 , output =  D 
                         C D
                         B C D 
                         A B C D  */
    /*
    int i = 1 , n ;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+n-i+j-1;
            cout<<" "<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */
    /*Que-16 , output =    *
                          **
                         ***
                        ****  */
    /*
    int i = 1,n;
    cin>>n;

    while(i<=n)  
    {
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space-=1;            
        }
    
        int j = 1;
        while(j<=i)
        {
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    */

    /*Que-17 , output = ****
                        ***  
                        **
                        *       */
    /*
    int i = 1,n;
    cin>>n;

    while(i<=n)  
    {
        int j = 1;
        int star  = n-i+1;
        while(j<=star)
        {
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    */
    /*Que-18 , output =     1
                          1 2 1
                        1 2 3 2 1
                      1 2 3 4 3 2 1  */
    /*           
        int i = 1,n;
        cin>>n;
        while(i<=n)
        {
            int space = n-i;
            while(space)
            {
                cout<<" ";
                space--;
            }

            int j = 1;
            while(j<=i)
            {
                cout<<j;
                j+=1;
            }

            int start = i-1;
            while(start)
            {
                cout<<start;
                start--;
            }
            cout<<endl;
            i+=1;
        
        }
        */

    // HOMEWORK

    //Que-1
  

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j;
            j = j + 1;
        }
        int star = (2 * i) - 2;
        while (star)
        {
            cout << "*";
            star = star - 1;
        }
        j = j - 1;
        while (j)
        {
            cout << j;
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}