#include<iostream>
using namespace std;

class STUDENT {
 public:
 int id;
 string name;

 //constructor : paramertized ctor
 STUDENT(int id, string name){
    this->id =id;
    this->name= name;
    cout<<"contructor is called"<<endl;
    }

 void info(){
    cout<<this->name<<"  has a id as "<< this->id<<endl;
 }
 void study(){

 }

  ~STUDENT() {
        cout << "Destructor is called for "<< this->name << endl;
    }
};

int main(){
    STUDENT A ( 4 , "Rahul");
    A.info();
    STUDENT B(45,"raj");
    B.info();

    cout<<"class to object is done "<<endl;
    return 0;
}