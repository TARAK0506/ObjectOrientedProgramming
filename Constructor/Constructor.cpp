#include<bits/stdc++.h>
using namespace std;

class Student{
  private:
    string name;
    int age;
  public:
    Student():name(""),age(0){}
    Student(string name, int age):name(name),age(age){}
    void printInfo(){
       cout<<"Name of the Student: "<<name<<endl;
       cout<<"Age of the Student: "<<age<<endl;
    }
};

int main(){
    Student s("John", 21);
    s.printInfo();
    return 0;
}