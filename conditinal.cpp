#include<iostream>
using namespace std;

//1.write a program to take input as age and print that adult or not
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"you are an adult person";
    }
    else{
        cout<<"you are not an adult person";
    }
    return 0;
}