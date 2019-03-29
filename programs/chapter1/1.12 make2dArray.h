//
// Created by tuhaoxin on 2019-03-29.
//

#ifndef CHAPTER1_1_12_MAKE2DARRAY_H
#define CHAPTER1_1_12_MAKE2DARRAY_H

#include <exception>
#include <new>

using namespace std;

template <class T>
bool make2dArray(T ** &x, int numberOfRows, int numberOfColumns){
    try {
        x = new T *[numberOfRows];

        for (int i=0; i<numberOfRows; i++){
            x[i] = new int [numberOfColumns];
        }
        return true;
    }
    catch (bad_alloc){
        return false;
    }

}

#endif //CHAPTER1_1_12_MAKE2DARRAY_H
