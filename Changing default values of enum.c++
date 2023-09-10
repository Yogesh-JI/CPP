#include <iostream>
using namespace std;

enum seasons{spring=34,summer=4,autumn=9,winter=85}; //increment will occur by 1 once you initialize any enum element from lest side.
int main()
{
    seasons s;
    s=winter;
    cout<<"winter= "<<s<<endl;

    return 0;
}
