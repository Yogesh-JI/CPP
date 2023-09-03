// #include<iostream>
// using namespace std;
// int global=9;
// int main()
// {
//     int global=5;
//     cout<<"Global: "<<global;
// }


//---------------------------------------------------------

#include<iostream>
using namespace std;
int global=9;
int main()
{
    int global=5;
    cout<<"Global: "<<::global;
}