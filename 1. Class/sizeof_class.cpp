#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int age;
        char grade;
        float marks;
        string name;
};

int main(){
    Student s;
    cout<<"Size of Student Class :"<< sizeof(s)<<endl;
    cout<<"Size of Studnet Class Object is :"<<sizeof(s)<<endl;
}