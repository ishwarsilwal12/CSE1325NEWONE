#include <iostream>
using namespace std;
#include "student.cpp"
int main(){
string name;
double grade;
cout << "Enter student name: ";
cin >> name;
Student student(name);
while(grade >= 0){
cout << "Enter next grade: ";
cin >> grade;
student.exam(grade);
}
cout << student.name() << " has a " << student.average() << "." << endl;
}
