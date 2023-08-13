// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"input two numbers from user: \n";
//     cin>>a>>b; //input two numbers from user
//     int sum =a+b;
//     cout<<"sum of two number a and b is "<<sum;
// }



#include <iostream>
#include <string>

using namespace std;

int main() {
    string r;
    string input;
    
    getline(cin, input);

    // Reverse the string
    string reversed = "";
    for (int i = input.length()-1 ; i >= 0; --i) {
        reversed+= input[i];
    }

    // Print the reversed string
    
    
    for (int i=1;i< input.length();i++)

       {   
        r+=reversed[i];
        i++;
       }
       cout<< r;
} 