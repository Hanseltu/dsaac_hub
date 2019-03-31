//
// Created by tuhaoxin on 2019-03-31.
//

#ifndef CHAPTER1_1_13_17_CURRENCY_H
#define CHAPTER1_1_13_17_CURRENCY_H

#include <iostream>
#include "1.26 myException.h"

using namespace std;

enum signType {Plus, Minus}; //plus and minus are key in C++17, so now use Plus and Minus

class currency
{
public:
    //constructor
    //enum signType{plus, minus};
    currency(signType theSign = Plus, unsigned long theDollars = 0, unsigned int theCents = 0);

    //destructor
    ~currency(){};
    void setValue(signType, unsigned long, unsigned int);
    void setValue(double);
    signType getSign() const {
        return sign;
    }
    unsigned long getDollars() const{
        return dollars;
    }
    unsigned int getCents() const{
        return cents;
    }

    currency add(const currency&) const;
    currency& increment(const currency&);
    void output() const;

private:
    signType sign;
    unsigned long dollars;
    unsigned int cents;
};

currency ::currency(signType theSign, unsigned long theDollars, unsigned int theCents){
    setValue(theSign, theDollars, theCents);
}

void currency ::setValue(signType theSign, unsigned long theDollars, unsigned int theCents){
    if (theCents > 99)
        throw illegalParameterValue(" Cents should be < 100 ");
    sign = theSign;
    dollars = theDollars;
    cents = theCents;
}

void currency ::setValue(double theAmount){
    if (theAmount < 0){
        sign = Minus;
        theAmount = -theAmount;
    }
    else
        sign = Plus;
    dollars = (unsigned long) theAmount;
    cents = (unsigned int)((theAmount + 0.001 - dollars) * 100);

}

currency currency ::add(const currency &x) const {
    //add x and *this
    long a1, a2, a3;
    currency result;

    // convert invoking object to signed integers
    a1 = dollars * 100 + cents;
    if (sign == Minus)
        a1 = -a1;

    //convert x to signed integer
    a2 = x.dollars * 100 + x.cents;
    if (x.sign == Minus)
        a2 = -a2;

    a3 = a1 + a2;

    //convert to currency representation
    if (a3 < 0){
        result.sign = Minus;
        a3 = -a3;
    }
    else
        result.sign = Plus;

    result.dollars = a3 / 100;
    result.cents = a3 - result.dollars * 100;

    return result;
}

currency& currency ::increment(const currency &x) {
    *this = add(x);
    return *this;
}

void currency :: output() const{
    if (sign == Minus)
        cout << '-';
    cout << '$' << dollars << '.';
    if (cents < 10)
        cout << '0';
    cout << cents;
}
#endif //CHAPTER1_1_13_17_CURRENCY_H
