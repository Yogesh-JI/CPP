#include<iostream>
using namespace std;
void fn(int a,int b)
{
    a+=2;
    b+=2;
    cout<<"call by value:"<<endl;
    cout<<a<<endl<<b<<endl;
}

void fun(int *c,int *d)
{
    *c+=2;
    *d+=2;
    cout<<"call by address:"<<endl;
    cout<<c<<endl<<d<<endl;

}

void ref(int &n,int &m)
{
    n+=2;
    m+=2;
    cout<<"call by reference:"<<endl;
    cout<<n<<endl<<m<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter data:"<<endl;
    cin>>x>>y;
    fn(x,y);
    cout<<"value after fn call:"<<endl;
    cout<<x<<endl<<y<<endl;


    fun(&x,&y);
    cout<<"value after fun:"<<endl;
    cout<<x<<endl<<y<<endl;


    ref(x,y);
    cout<<"value after ref:"<<endl;
    cout<<x<<endl<<y<<endl;


}