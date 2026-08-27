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
int reverse_number(long long x) {
     int r;
     long long z=0;
     
     while(x!=0){
        r=x%10;
        x=x/10;
        z=(z*10)+r;
        
     }
     return z;
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