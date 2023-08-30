#include<iostream>
using namespace std;
int main() 
{
    // int x=20;
    // int *p=&x;
    // cout<<*p<<" "<<p<<endl;
    // int &m=x;
    // cout<<m;

    
    // string food="pizza";
    // cout<<food <<endl;
    // cout<<&food;


    // string food="pizza";
    // string *ptr=&food;
    // cout<<food <<endl;
    // cout<<&food<<endl;
    // cout<<ptr;


    string food="pizza";
    string &meal=food;
    cout<<meal;
}