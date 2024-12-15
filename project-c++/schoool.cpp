#include <iostream>
using namespace std;

class Person {
private:
    string name, gender;
    int age;

public:
    Person(string na, string ga, int a) : name(na), gender(ga), age(a) {}

    string getName() { return name; }
    string getGender() { return gender; }
    int getAge() { return age; }

    void display() {
        cout << "My Name is " << name
             << ", My Gender is " << gender
             << ", My Age is " << age << endl;
    }

    ~Person() { cout << "Goodbye, " << name << endl; }
};

class Student : public Person {
private:
    string departMent;
    float gpa;

public:
    Student(string na, string ga, int a, string dp, float gpa)
        : Person(na, ga, a), departMent(dp), gpa(gpa) {}

    void display() {
        cout << "My Name is " << getName()
             << ", My Gender is " << getGender()
             << ", My Age is " << getAge()
             << ", My Department is " << departMent
             << ", My GPA is " << gpa << endl;
    }
};

class Techer : public Person {
private:
    string department;
    int workYears;

public:
    Techer(string dep, string na, string ga, int work, int a)
        : Person(na, ga, a), department(dep), workYears(work) {}

    void display() {
        cout << "My Name is " << getName()
             << ", My Gender is " << getGender()
             << ", My Age is " << getAge()
             << ", My Department is " << department
             << ", My Work Years is " << workYears << endl;
    }
};

int main() {
    Person s1("Abdullah", "Male", 19);
    s1.display();

    Student s2("Ahmed", "Male", 20, "Computer Science", 3.75);
    s2.display();

    Techer s3("Math", "Mohamed", "Male", 20, 45);
    s3.display();

    return 0;
}
