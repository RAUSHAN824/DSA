#include<iostream>
#include <array>
using namespace std;

// int countdigit(int p){
//         int c=0;
//     while(p>=10){
       
//         p= p/10;
//         c++;
//     }   

//     if(p<10){
//         c++;
//     }
//     return c;
// }
// int reverse_number(long long x) {
//      int r;
//      long long z=0;
     
//      while(x!=0){
//         r=x%10;
//         x=x/10;
//         z=(z*10)+r;
        
//      }
//      return z;
//     }
// int palindrom(int z){
//     int ar[];

//     return 0;
// }
int GCD(int x, int y){
    int q = 1; 
    int smaller = (x < y) ? x : y; 
    // ternary operator: agar x < y true hai to smaller = x, warna smaller = y 
    //(dono me se chota value smaller me store)
    for(int i = 1; i <= smaller; i++){
        if(x % i == 0 && y % i == 0){
            q = i;
        }
    }
    return q;
}
int odd_digit(int n) {
    int p;
    int count = 0;

    while (n > 0) {
        p = n % 10;

        if (p % 2 != 0) {
            count++;
        }

        n = n / 10;
    }

    return count;
}
int LCM(int num1, int num2) {
    int i;

    if (num1 > num2)
        i = num1;
    else
        i = num2;

    while (1) {
        if (i % num1 == 0 && i % num2 == 0)
            return i;

        i++;
    }
}
int main(){
    int n,m;
    int g;
    cout<<"enter the numbers :";
    cin>> n>>m;
    // // int digit= countdigit(n);
    // // // cout<<digit;
    // // int reverse= reverse_number(n);
    // // cout<<reverse;
    g=LCM(n,m);
    cout<<g;

    
    return 0;
}