#include <iostream>
using namespace std;
#include "student.cpp"
int main(){
string name;
double homeworkgrades;
double examgrades;
cout << "Enter student name: ";
cin >> name;
Student student(name);
/*
while((homeworkgrades >= 0) || (examgrades >= 0)){
cout << "Enter next exam grade: ";
cin >> examgrades;
cout << "Enter next homework grade: ";
cin >> homeworkgrades;
student.exam(examgrades);
student.homework(homeworkgrades);
}*/
cout << student.name();// << " has a " << student.average() << "." << endl;
}
