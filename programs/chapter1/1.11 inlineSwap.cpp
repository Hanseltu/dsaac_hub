//
// Created by tuhaoxin on 2019-03-29.
//

#include <iostream>

using namespace std;

template <class T>
inline void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

/*
int main(){
    int a = 1, b = 2;
    Swap(a,b);
    cout << a << b << endl;

    return 0;
}
 */