#include<iostream>
using namespace std;
int main()
{
    int m=0,n=1,o,i,number;
    cout<<"Enter the number of terms you want to print : ";cin>>number;
    cout<<m<<" "<<n<<" ";
    for( i = 2 ; i <number; ++i )
    {
        o=m+n;
        cout<<o<<" ";
        m=n;
        n=o;
    }
    return 0;
}