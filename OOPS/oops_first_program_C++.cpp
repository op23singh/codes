#include<bits/stdc++.h>

using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student() {
        cout << "default constructor" << endl;
    }

    Student(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "hello " << name << endl;
    }

    Student(Student const &s) {
        this->age = s.age;
        this->name = s.name;
    }

    void display() {
        cout << age << " " << name << endl;
    }

    ~Student() {
        cout << "destructor callled for student "<< name<< endl;
    }
};


int main() {
    Student s1("onkarpreet singh", 19);
    Student s2("deepak kumar", 20);

}