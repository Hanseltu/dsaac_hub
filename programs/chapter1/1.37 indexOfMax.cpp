//
// Created by tuhaoxin on 2019-03-31.
//

#include <iostream>
#include "1.26 myException.h"

using namespace std;

template<class T>
int indexOfMax(T a[], int n){
    if (n < 0)
        throw illegalParameterValue("n must be > 0");

    int indexOfMax = 0;
    for (int i=0; i<n; i++){
        if (a[indexOfMax] < a[i])
            indexOfMax = i;
    }
    return indexOfMax;
}
int main()
{
    int a[6] = {1, 4, 2, 5, 6, 3};

    // output the array elements
    cout << "a[0:5] = ";
    copy(a, a+6, ostream_iterator<int>(cout, " "));
    cout << endl;

    // test the function indexOfMax
    cout << "max(a,1) = " << indexOfMax(a,1) << endl;
    cout << "max(a,4) = " << indexOfMax(a,4) << endl;
    cout << "max(a,6) = " << indexOfMax(a,6) << endl;

    cout << endl;

    cout << "max(a,1) = " << a[indexOfMax(a,1)] << endl;
    cout << "max(a,3) = " << a[indexOfMax(a,3)] << endl;
    cout << "max(a,6) = " << a[indexOfMax(a,6)] << endl;
    return 0;
}