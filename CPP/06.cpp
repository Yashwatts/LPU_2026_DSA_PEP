#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int speed;
    string color;

    // Same name as class name
    // does not have a return type
    // it is called automatically when object is created
    // Car(){
    //     cout << "Default constructor method called" << endl;
    // }

    Car(string name){
        this->name = name;
    }

    void increaseSpeed(){

    }

    void fly(){

    }

};

class Student{
    public:
    string name;
    int rollno;
    string course;

    Student(string name, int rollno, string course){
        this->name = name;
        this->rollno = rollno;
        this->course = course;
    }
};

int main(){

    // Car c1("Suzuki");
    // Car c2("Tata");
    // cout << c1.name << endl;
    // cout << c2.name << endl;

    Car *c1 = new Car("Suzuki");
    Car *c2 = new Car("Tata");
    cout << c1->name << endl;
    cout << c2->name << endl;

    Student *s1 = new Student("Yash", 20, "DSA");
    Student *s2 = new Student("Mohit", 22, "Cloud");
    cout << s1->name << " " << s1->rollno << " " << s1->course << endl;
    cout << s2->name << " " << s2->rollno << " " << s2->course << endl;

}