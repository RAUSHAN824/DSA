#include<iostream>
using namespace std;


//  The Standard Template Library (STL) is a collection of generic classes and functions in C++ that provide:

//            Containers → Data structures like vector, list, map, etc.
//            Algorithms → Predefined functions like sort(), find(), count(), etc.
//            Iterators → Objects that act like pointers to traverse containers.
// It helps you write fast, reusable, and type-safe code without reinventing common data structures and algorithms.

// 1.PAIRS
void readpairs(){
    pair<int , int> p ={1,3};
    cout<<p.second; //prints 3

    pair<int, pair<int,int>> pa = {5,{4,6}}; //also store pair as a element
    cout<<pa.first;           //prints 5
    cout<<pa.second.second;   //prints 6
    cout<<pa.second.first;    //prints 4

}