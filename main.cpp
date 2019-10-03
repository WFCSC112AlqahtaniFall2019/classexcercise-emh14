#include <iostream>

using namespace std;

class Faculty {
public:
    string name;
    string id;
    string address;
    string DoB;
    string degree;

//getter and setter for salary
    double getSalary() { return salary; }
    void setSalary(double salary);

    /* 1) create a getter and setter for each variable in the class*/

    string getName() {return name;}
    void setName(string name);

    string getID() {return id;}
    void setID(string id);

    string getAddress() {return address;}
    void setAddress(string address);

    string getDoB() {return DoB;}
    void setDoB(string DoB);

    string getDegree() {return degree;}
    void setDegree(string degree);


    //getter and setter for SSN
    double getSSN() { return SSN; }
    void setSSN(double SSN);

private:
    double salary;
    double SSN;
};

void Faculty::setSalary(double s) {
    salary = s;
}

/* 2) implement each setter and getter */

int main() {
    Faculty prof;

/* 3) use the implemented methods to fill prof' info and print them out */

    return 0;
}
