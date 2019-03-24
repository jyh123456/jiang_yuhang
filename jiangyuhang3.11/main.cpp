#include<iostream>
#include<string>
using namespace std;
class GradeBook
{
public:
GradeBook(string coursename,string teachername)
{
setCourseName(coursename);
setTeacherName(teachername);
}
void setCourseName(string coursename)
{
CourseName=coursename;
}
string getCoursename()
{
return CourseName;
}
void setTeacherName(string teachername)
{
TeacherName=teachername;
}
string getTeacherName()
{
return TeacherName;
}
void displayMessage()
{
cout<<"Welcome to the grade book for \n"<<getCourseName()<<"!"<<"\nThis Course is prsented by "<<getTeacherName()<<endl;
}
private:
string CourseName;
string TeacherName;
};
int main()
{
GradeBook gradebook("C++ Programming","Miss Huang");
gradebook.displayMessage();
return 0;
}

