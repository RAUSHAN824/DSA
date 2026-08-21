#include<iostream>
using namespace std;

int main(){
    // NORMAL OUTPUT SYNTAX
    cout << "hello world \n";


              // //input output number 
    int x; 
    cout << "enter the value of x as integer\n";cin >>x;
    
    cout << "\nthe value of x is : ",cout<<x;
    
                      
                       //STRING

        //type 01 : takes only one string word 
    string str;
    cout<< "enter the string\n" , cin >> str;
    cout << str;

        // type 02 : use of getline to take the entire line 
    string hii;
    cout << "\nenter the second string ";
    getline( cin , hii);
    cout<<"\n the result string is \n", cout<< hii;
   
    

    return 0;
}