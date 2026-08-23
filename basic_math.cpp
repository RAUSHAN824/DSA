#include<iostream>
using namespace std;

int countdigit(int p){
        int c=0;
    while(p>=10){
       
        p= p/10;
        c++;
    }  
     if(p<10){
          c++  ;
        }
    return c;
}

int main(){
    int n;
    cout<<"enter the number :";
    cin>> n;
    int digit= countdigit(n);
    cout<<digit;

    return 0;
}