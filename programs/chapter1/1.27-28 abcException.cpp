//
// Created by tuhaoxin on 2019-03-31.
//

#include<iostream>
#include "1.26 myException.h"

using namespace std;

int abc(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        throw illegalParameterValue ("All parameters should be > 0");
    return a + b * c;
}

/*
int main()
{
    try {cout << abc(2,0,4) << endl;}
    catch (illegalParameterValue e)
    {
        cout << "The parameters to abc were 2, 0, and 4" << endl;
        cout << "illegalParameterValue exception thrown" << endl;
        e.outputMessage();
        return 1;
    }
    return 0;
}
 */
