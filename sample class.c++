#include<iostream>
using namespace std ;
class student
{ 
    public:
    int rollno;
    char name[20];
    int age;
    void getdata();
    void showdata();

}s1;

void student :: getdata(){
    cout<<"Enter the details of a student\n";
    cin>>rollno>>name>>age;

}
void student :: showdata(){
    cout<<"\nRoll no: "<<rollno<<endl;
    cout<<"Name :  "<<name<<endl;
    cout<<"Age   :  "<<age<<endl;
}

int main() {
   
    // student s1;
    //calling member function to input data into object s1
    int y=s1.getdata();
    cout<<y;
    /* calling member function to display data from object s1 */
    s1.showdata();
    return 0;
}