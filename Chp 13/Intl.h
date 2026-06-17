#ifndef GUARD_Intl_h
#define GUARD_Intl_h

#include <iostream>
#include "Core.h"
#include "Vec.h" 

class Intl : public Core {
public:
    Intl();
    Intl(std::istream& is);

    std::istream& read(std::istream& is) override;
    double grade() const override;

protected:
    Intl* clone() const override { return new Intl(*this); }

private:
    double intl_exam; 
};

#endif