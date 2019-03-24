#include<string>
class GradeBook
{
public:
    GradeBook(std::string);
    void setCourseName(std::string);
    void setTeacherName(std::string);
    std::string getCourseName()const;
    std::string getTeacherName()const;
    void displayMessage()const;
    private:
    std::string teacherName;
    std::string courseName;
};
