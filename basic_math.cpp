#include<iostream>
#include <array>
using namespace std;

int countdigit(int p){
        int c=0;
    while(p>=10){
       
        p= p/10;
        c++;
    }   

    if(p<10){
        c++;
    }
    return c;
}
int reverse_number(int y){
    int w;
    int rev_no=0;
    while(y>0){
        w= y%10;
        y=y/10;
        rev_no =(rev_no*10)+w;
    }
}
// int palindrom(int z){
//     int ar[];

//     return 0;
// }
int main(){
    int n;
    cout<<"enter the number :";
    cin>> n;
    int digit= countdigit(n);
    // cout<<digit;
    int reverse= reverse_number(n);
    cout<<reverse;
    return 0;
}