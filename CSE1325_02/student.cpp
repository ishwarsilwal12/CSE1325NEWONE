class Student{
private:
string student_name;
double exam_sum;
double exam_num_grades;
public:
Student(string name){
student_name=name;
exam_sum=0;
exam_num_grades=0;
}
string name(){
return student_name;
}
void exam(double grades){
if ((grades < 0) && (exam_num_grades == 0))
{
exam_sum=100;
exam_num_grades=1;
}
else if (grades < 0){
exam_sum=exam_sum;
exam_num_grades = exam_num_grades;
}
else {
exam_sum=exam_sum+grades;
exam_num_grades += 1;
}
}
double average(){
double avg;
avg = (exam_sum)/exam_num_grades;
return avg;
}
};
