#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdexcept>
#include "mok.h"
 
using namespace std;

int s::students::counterID=1;

s::students::students(){
	cID=counterID;
	counterID++;
}
s::students::~students(){
}
string s::students::getName(){
	return name;
}
void s::students::setName(string n){
	name=n;
}
void s::students::setGrade(int g){
	if(g>0 && g<=10){
		grades.push_back(g);
	}
	else{
		throw out_of_range("Grade out of range");
	}
}
float s::students::getAverage(){
    float average;
    for(int i=0; i<grades.size(); i++){
        average+=grades[i];
    }
    average=average/grades.size();
    return average;
}
void s::students::showAverage(){
	cout<<name<<" "<<getAverage()<<endl;
}
string s::students::toString(){
	ostringstream ss;
	ss<<"ID - "<<cID<<endl;
	return ss.str();
}
