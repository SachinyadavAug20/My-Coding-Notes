#include<iostream>
class student
{
    public:
    std::string name="student";
    int age;
    double cgpa;

    student(std::string name,int x,double gpa)//made a custom constructor for the need
    {
        this->name=name;//////this only as parameter name is same as the argument name
        age=x;
        cgpa=gpa;
        show_student_detail();
    }
    void show_student_detail()
    {
        std::cout<<name<<" is "<<age<<" years old, with cgpa "<<cgpa<<"\n";
    }

};
int main(){
    student student1("sunny",68,9.9);
    student student2("harry",21,9.98);
    student student3("karnel",71,6.98);
    student student3("sandy",621,10.00);
    return 0;
}