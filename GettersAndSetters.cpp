#include<iostream>
using namespace std;

class Student{
    private:
    int rollno;
    char name[20];
    float marks;
    char grade;

    public:
    int getrollno(){
        return rollno;

    }
    void setrollno(int r){
        rollno=r;
        cout<<"roll no of student is "<<r;

    }

};

int main(){
    Student s1;
    s1.getrollno();
    s1.setrollno(5);
    return 0;
}