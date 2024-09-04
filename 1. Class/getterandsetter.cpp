#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        Student(string name ="" , int age=0): name(name) , age(age){}
        void set_details(string name, int age){
            this->name = name;
            this->age = age;
        }
        string get_name(string name){
            return name;
        }
        int get_age(int age){
            return age;
        }
        void printInfo(){
            cout<<"Name of the Student: "<< name <<endl;
            cout<<"Age of the Student: "<< age <<endl;
        }
};

int main(){
    Student s;
    s.set_details("Devera",23);
    s.printInfo();
    return 0;
}