#include <iostream>
struct student
{
    std::string name;
    std::string college;
    std::string department;
    int roll_no;
    double gpa;
    bool working=false;//this is deafult case
};
void display_student_detail(student student)
{
    std::cout << student.name << " at " << student.college << " of " << student.department << " with roll no." << student.roll_no << " has gpa " << student.gpa << " working status " << student.working << " \n";
}
int main()
{
    student s1;
    s1.name = "partick";
    s1.college = "VESIT";
    s1.department = "Comps";
    s1.roll_no = 632;
    s1.gpa = 7.3;
    s1.working = false;
    student s2 = {"Bob", "FEIT", "IT", 745, 8.5, false};
    student s3 = {"crab", "VITM", "EXTC", 937, 6.5, true};

    display_student_detail(s1);
    display_student_detail(s2);
    display_student_detail(s3);
    return 0;
}