#include<bits/stdc++.h>
using namespace std;
// copy constructor is a constructor which initializes an object using another object of the same class.

class Student{
    private:
        string name;
        int age;
        char grade;
        int marks;
        float avg;
    public:
        Student(string name, int age, char grade, int marks, float avg){
            this->name=name;
            this->age=age;
            this->grade=grade;
            this->marks=marks;
            this->avg=avg;
            cout<<"Parameterized Constructor"<<endl;
            // display();
        }

        Student(Student& s){
            name=s.name;
            age=s.age;
            grade=s.grade;
            marks=s.marks;
            avg=s.avg;
            cout<<"Copy Constructor"<<endl;
            display();
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Grade: "<<grade<<endl;
            cout<<"Marks: "<<marks<<endl;
            cout<<"Average: "<<avg<<endl;
            cout<<endl;
        }
};
int main(){
    Student S("Tarak",23,'A',976,34.5);                         
    Student R(S);                      
    return 0;
}