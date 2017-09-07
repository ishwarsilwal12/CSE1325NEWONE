class Student{
private:
string student_name;
double exam_sum;
double exam_num_grades;
double homework_sum;
double homework_num_grades;
public:
Student(string name) : student_name{student_name=name}, exam_sum{exam_sum=0}, exam_num_grades{exam_num_grades=0}, homework_sum{homework_sum=0}, homework_num_grades{homework_num_grades=0} {} 
string name(){
return student_name;
}
void homework(double grade){
if (grade<0){
homework_sum=homework_sum;
homework_num_grades=homework_num_grades;
}
else {
homework_sum=homework_sum+grade;
homework_num_grades+= 1;
}
}
void exam(double grades){
if (grades < 0)
{
exam_sum=exam_sum;
exam_num_grades=exam_num_grades;
}
else {
exam_sum=exam_sum+grades;
exam_num_grades += 1;
}
}
double average(){
double avg;
avg = (((homework_sum)/(homework_num_grades))*0.6) + (((exam_sum)/(exam_num_grades))*0.4);
return avg;
}
};
