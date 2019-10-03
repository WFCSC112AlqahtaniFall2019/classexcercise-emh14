//
// Created by Ethan Harrison on 10/3/19.
//

#include "Faculty.h"

//General Constructor
Faculty::Faculty(string nm, string ident, string add, string date, string deg) {
    name = nm;
    id = ident;
    address = add;
    DoB = date;
    degree = deg;
}
void Faculty::setSalary(double s) {
    salary = s;
}

/* 2) implement each setter and getter */

void Faculty::setName(string n) {
    name = n;
}

void Faculty::setID(string i) {
    id = i;
}

void Faculty::setAddress(string a) {
    address = a;
}

void Faculty::setDoB(string d) {
    DoB = d;
}

void Faculty::setDegree(string e) {
    degree = e;
}
