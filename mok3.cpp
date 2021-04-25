#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "mok.h"
 
using namespace std;
using namespace s;

int main(){
    students s;
    cout<<"Student and his average grade"<<endl;
    s.setName("Josh");
    s.setGrade(10);
    s.setGrade(9);
    s.setGrade(10);
    s.setGrade(9);
    s.showAverage();
    students s1;
    students s2;
    vector<students> studentsVector;
    s1.setName("Josh1");
    s1.setGrade(7);
    s1.setGrade(3);
    s1.setGrade(10);
    s1.setGrade(6);
    studentsVector.push_back(s1);
    s2.setName("Josh2");
    s2.setGrade(8);
    s2.setGrade(2);
    s2.setGrade(2);
    s2.setGrade(6);
    studentsVector.push_back(s2);
    cout<<"Students and their average grades:"<<endl;
    for(int i=0; i<studentsVector.size(); i++){
        studentsVector[i].showAverage();
    }
    studentsVector.clear();
    students *sd=new students();
    cout<<"Student from other class and his average:"<<endl;
    sd->setName("Kylie");
    sd->setGrade(2);
    sd->setGrade(1);
    sd->setGrade(2);
    sd->getAverage();
    sd->showAverage();
    delete sd;
    students *sd1=new students[2];
    cout<<"Students from other class and their average grades:"<<endl;
    sd1[0].setName("Kylie1");
    sd1[0].setGrade(3);
    sd1[0].setGrade(4);
    sd1[0].showAverage();
    sd1[1].setName("Kylie2");
    sd1[1].setGrade(5);
    sd1[1].setGrade(11);
    sd1[1].setGrade(4);
    sd1[1].showAverage();
    system("pause");
}
