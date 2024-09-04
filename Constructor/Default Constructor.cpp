#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int age;
        string name;
        char grade;
        bool result;
    public:
        //Default Constructor
        // Initializing Members Inside the Constructor Body
       Student() {
            name = "Tarak";
            age = 23;
            grade = 'A';
            result = true;
        }
        
        // Method to display student details
        void display(){
            cout<<"Name of the student: "<<name<<endl;
            cout<<"Age of the student: "<<age<<endl;
            cout<<"Academic Grade: "<<grade<<endl;
            cout<<"Result: "<<(result ? "Pass" : "Fail")<<endl;
        }
};

int main() {
    Student s;
    s.display();
    return 0;
}