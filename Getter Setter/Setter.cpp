#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        int age;
        string str;
    public:
        Student():str("Tarak"),age(23){}
        void set_details(string name , int age){
            str = name;
            this->age = age;
        }
        void display(){
            cout<<"Name of the Student: "<<str<<endl;
            cout<<"Age of the Student: "<<age<<endl;
        }
};
int main(){
    Student s;
    s.set_details("Ramarao",22);
    s.display();
    return 0;
}