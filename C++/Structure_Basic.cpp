#include <iostream>
using namespace std;

struct student {
    char name[100];
    int marks;
};

int main() {
    student stu1,stu3;

    // Input for student 1
    cin >> stu1.name;
    cout << "Name of the first student: " << stu1.name << endl;
    cin >> stu1.marks;
    cout << "Marks of first student: " << stu1.marks << endl;

    student stu2 = {"Sohel", 50};

    cout << "Name of the second student: " << stu2.name << endl;
    cout << "Marks of the second student: " << stu2.marks << endl;

    stu3=stu2;
     cout << "Name of the second student: " << stu3.name << endl;
    cout << "Marks of the second student: " << stu3.marks << endl;


    return 0;
}
