#include<iostream>
using namespace std;

class Student{
    public:
        string student_name;
        string student_rollnumber;
        int fees;

    Student(string x, string y, int z){
        student_name = x;
        student_rollnumber = y;
        fees = z;
    }
};

int main(){
    Student studentObj1("raj","0133CI221164",13000);
    Student studentObj2("ramprakash","0133CY221095",1000);

    cout<<studentObj1.student_name<<studentObj1.student_rollnumber<<studentObj1.fees<<endl;
    cout<<studentObj2.student_name<<studentObj2.student_rollnumber<<studentObj2.fees<<endl;


    return 0;
}