#include<iostream>
using namespace std;


//  The Standard Template Library (STL) is a collection of generic classes and functions in C++ that provide:

//            Containers → Data structures like vector, list, map, etc.
//            Algorithms → Predefined functions like sort(), find(), count(), etc.
//            Iterators → Objects that act like pointers to traverse containers.
// It helps you write fast, reusable, and type-safe code without reinventing common data structures and algorithms.

// //1.VECTOR : dynamic array that can grow or shrink size in runtime.
//              allow fast random acces to element.

#include<vector>




int main(){

    //vector initailize
    vector<int> marks;
    //push_back fuction to add elements in the vector 
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    
    //begin() is used to point the first element location and *(vector.begin()) is used to call th element
    cout<<"first element is "<<*(marks.begin())<<endl;

    //size() is to find the size of vector 
    cout<<"size of vector is : "<<marks.size()<<endl;
    //pop_back() is used to delete the last element
    marks.pop_back();
    cout<<"size of vector is : "<<marks.size()<<endl;

    //front() is used to print first element and back is used the last element 
    //output should be 10 and 20 , because 30 is popped out
    cout<<"the first and last element is :"<<marks.front()<< " and "<<marks.back()<<endl;

    //let's print the elment at particular index, make sure that the index should be valid 
    cout<<marks[1]<<endl;
    // error comes when we wanted to print marks[3], which is not valid index for this vector 
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);
    //one more way to print particular index element, now the vector contains 10,20,30,40,50
    cout<<marks.at(3)<<endl; //output is 40 , which is at 3rd index
    
    //to find capacity of vector
    cout<<marks.capacity()<<endl;//output is 8

    //to reserve the capacity for any vector
    marks.reserve(15);
    cout<<marks.capacity()<<endl;//output is 15
    
    return 0;
}

// @teamRJ