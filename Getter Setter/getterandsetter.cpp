#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int age;
        string name;
        char grade;
        bool result;
    public:
        // setter
        void set_age(int a){
            age = a;
        }
        void set_name(string name){
            this->name = name;
        }
        
        // getter 
        int get_age(){
            return age;
        }
        string get_name(){
            return name;
        }
        
        void display(){
            cout<<"Name of the Student: "<<name<<endl;
            cout<<"Age of the Student: "<<age<<endl;
        }
};

int main() {
    Student s;
    
    s.set_name("Adarsh");
    s.set_age(22);
    
    s.display();
    return 0;
}