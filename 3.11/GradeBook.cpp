#include "GradeBook.h"
#include<iostream>
using namespace std;


GradeBook::GradeBook(string name1,string name2)
    £ºcourseName(name1),teacherName(name2)
{      courseName=name1;
       teacherName=name2;

}

void GradeBook::setCourseName(string name1)
{
    courseName=name1;
}
string GradeBook::getCourseName()const
{
    return courseName;
}
void GradeBook::setTeacherName(string name2)
{
    teacherName=name2;
}
string GradeBook::getTeacherName()const
{
    return teacherName;
}
void GradeBook::displayMessage()const
{
    cout<<"Welcome to the grade book for"<<getCourseName()
    <<"!"<<"\nThis course is presented by:"<<getTeacherName()<<endl;
}
