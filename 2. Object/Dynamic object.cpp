#include <bits/stdc++.h>
using namespace std;

class Student{
    int age;
    string name;
};
int main() {
    Student *s = new Student();
    cout<<sizeof(*s)<<endl;
    return 0;
}