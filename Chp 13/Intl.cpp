#include <iostream>
#include <algorithm>
#include "Intl.h"
#include "grade.h"

using std::istream;

Intl::Intl() : Core(), intl_exam(0) {}

Intl::Intl(istream& is) { read(is); }

istream& Intl::read(istream& is) {
    Core::read_common(is); 
    is >> intl_exam;       

    if (is) {
        homework.clear();
        double x;
        while (is >> x) {
            homework.push_back(x);
        }
        is.clear();
    }
    return is;
}

double Intl::grade() const {
   
    return Core::grade();
}