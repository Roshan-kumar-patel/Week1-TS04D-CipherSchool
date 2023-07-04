#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(const string& n, int a) : name(n), age(a) {}

    friend class University; // Friend class declaration
};

class University {
public:
    void displayStudentInfo(const Student& student) {
        cout << "Name: " << student.name << endl;
        cout << "Age: " << student.age << endl;
    }
};

int main() {
    Student student("John Doe", 20);
    University university;

    university.displayStudentInfo(student);

    return 0;
}