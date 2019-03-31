//
// Created by tuhaoxin on 2019-03-31.
//

#ifndef CHAPTER1_1_22_23_CURRENCY_H
#define CHAPTER1_1_22_23_CURRENCY_H

#include <iostream>
#include "1.26 myException.h"

using namespace std;

enum signType {Plus, Minus}; //plus and minus are key in C++17, so now use Plus and Minus

class currency
{
    friend ostream &operator<<(ostream&, const currency&);
public:
    //constructor
    //enum signType{plus, minus};
    currency(signType theSign = Plus, unsigned long theDollars = 0, unsigned int theCents = 0);

    //destructor
    ~currency(){};
    void setValue(signType, unsigned long, unsigned int);
    void setValue(double);
    signType getSign() const {
        if (amount < 0)
            return Minus;
        else
            return Plus;
    }
    unsigned long getDollars() const{
        if (amount < 0)
            return (-amount) / 100;
        else
            return amount / 100;
    }
    unsigned int getCents() const{
        if (amount < 0)
            return -amount - getDollars() * 100;
        else
            return amount - getDollars() * 100;
    }

    currency operator+(const currency&) const;
    currency& operator+=(const currency& x){
        amount += x.amount;
        return *this;
    }
    void output(ostream&) const;

private:
    long amount;
};

currency ::currency(signType theSign, unsigned long theDollars, unsigned int theCents){
    setValue(theSign, theDollars, theCents);
}

void currency ::setValue(signType theSign, unsigned long theDollars, unsigned int theCents){
    if (theCents > 99)
        throw illegalParameterValue(" Cents should be < 100 ");
    amount = theDollars * 100 + theCents;
    if (theSign == Minus)
        amount = -amount;
}

void currency ::setValue(double theAmount){
    if (theAmount < 0){
        amount = (long) ((theAmount - 0.001) * 100);
    }
    else
        amount = (long) ((theAmount + 0.001) * 100);
}

currency currency ::operator+(const currency &x) const {
    currency y;
    y.amount = amount + x.amount;
    return y;
}

void currency :: output(ostream& out) const{
    long theAmount = amount;
    if (theAmount < 0){
        out << '-';
        theAmount = -theAmount;
    }
    long dollars = theAmount / 100;
    out << '$' << dollars << '.';
    int cents = theAmount - dollars * 100;
    if (cents < 0)
        out << '0';
    out << cents;
}

//overload
ostream& operator<<(ostream& out, const currency& x){
    //insert currency value into stream out
    long theAmount = x.amount;
    if (theAmount < 0){
        out << '-';
        theAmount = -theAmount;
    }
    long dollars = theAmount / 100;
    out << '$' << dollars << '.';
    int cents = theAmount - dollars * 100;
    if (cents < 0)
        out << '0';
    out << cents;
    return out;
}
#endif //CHAPTER1_1_22_23_CURRENCY_H
