#include <iostream>
using namespace std;int main()
// {
//     int rec(int);
//     int n,fact;
//     cout<<"Enter the number: "; cin>>n;
//     fact=rec(n);
//     cout<<"factorial is: "<<fact;

// }

// int rec(int a)
// {
//     int b;
//     if(a<=1)
//     {
//         return 1;
//     }
//     else
//     {
//         b=a*rec(a-1);
//         return b;
//     }
// }


//------------------------------------------------------

{
    int rec(int);
    int n,fact;
    cout<<"Enter the number: "; cin>>n;
    fact=rec(n);
    cout<<"sum is: "<<fact;

}

int rec(int a)
{
    int b;
    if(a<=1)
    {
        return 1;
    }
    else
    {
        b=a+rec(a-1);
        return b;
    }
}