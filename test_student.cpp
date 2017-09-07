#include <iostream>
using namespace std;
#include "student.cpp"
int main(){
string name;
double homeworkgrades;
double examgrades;
int i=0;
cout << "Enter student name: ";
cin >> name;
Student student(name);
while(i < 5){
cout << "Enter next homework grade: ";
cin >> homeworkgrades;
student.exam(0);
student.homework(homeworkgrades);
i++;
}

cout << student.name() << " has a " << student.average() << "." << endl;
}
