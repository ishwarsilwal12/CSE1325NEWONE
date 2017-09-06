#include <iostream>
using namespace std;
#include "student.cpp"
int main(){
string name;
int i;
double grade;
Student student("Bjarne Stroustrup");
while(i < 3){
cout << "Enter next grade: ";
cin >> grade;
student.exam(grade);
i++;
}
if (student.name() != "Bjarne Stroustrup"){
cout << "ERROR NAME" << endl;
}
if (student.average() != 90.0){
cout << "ERROR AVERAGE" << endl;
}
}
