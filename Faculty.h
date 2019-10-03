//
// Created by Ethan Harrison on 10/3/19.
//
#include <string>
using namespace std;
#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H

class Faculty {
public:
    Faculty();//default constructor
    string name;
    string id;
    string address;
    string DoB;
    string degree;

//getter and setter for salary
    double getSalary() { return salary; }

    void setSalary(double salary);

    /* 1) create a getter and setter for each variable in the class*/

    string getName() { return name; }
    void setName(string name);

    string getID() { return id; }
    void setID(string id);

    string getAddress() { return address; }
    void setAddress(string address);

    string getDoB() { return DoB; }
    void setDoB(string DoB);

    string getDegree() { return degree; }
    void setDegree(string degree);


    //getter and setter for SSN
    double getSSN() { return SSN; }
    void setSSN(double SSN);

private:
    double salary;
    double SSN;
};


#endif //CLASSEXCERCISE_FACULTY_H
