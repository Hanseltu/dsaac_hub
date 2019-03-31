//
// Created by tuhaoxin on 2019-03-29.
//

#include <iostream>

using namespace std;

template <class T>
T rSum(T a[], int n){
    if (n > 0)
        return rSum(a,n-1) + a[n-1];
    return 0;
}

/*
int main(){
    int a[6] = {1, 2, 3, 4, 5, 6};

    //output the array elements
    cout << "a[0:5] = ";
    copy(a, a+6, ostream_iterator<int>(cout, " "));
    cout << endl;

    //test the function sum
    cout << "rSum(a,0) = " << rSum(a,0) << endl;
    cout << "rSum(a,1) = " << rSum(a,1) << endl;
    cout << "rSum(a,6) = " << rSum(a,6) << endl;
    return 0;
}
 */