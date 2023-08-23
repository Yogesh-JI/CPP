

#include<iostream>
using namespace std;
class box
{
    private:
    static int length;
    static int breadth;
    static int height;
    public:
    static void print()
    {
        cout<<"the value of length"<<length<<endl;
        cout<<"the value of breadth"<<breadth<<endl;
        cout<<"the value of height"<<height<<endl;
    }
    int box :: length =10;
    int box :: breadth =20;
    int box :: height =30;
};

int main()
{
    box b;
    cout<<"static member function is called through object name:\n"<<endl;

    b.print();
    cout<<"\nstatic member function is called throough class name:\n"<<endl;
    box :: print();
    return 0;
}