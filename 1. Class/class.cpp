#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int age;
        void printInfo(){
            cout<<"Name of the Student: "<< name <<endl;
            cout<<"Age of the Student: "<< age <<endl;
        }
};

int main(){
    Student s;
    s.name = "Siri";
    s.age = 23;
    s.printInfo();
    return 0;
}