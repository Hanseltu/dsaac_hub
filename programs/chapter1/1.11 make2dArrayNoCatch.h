//
// Created by tuhaoxin on 2019-03-29.
//

#ifndef CHAPTER1_1_13_MAKE2DARRAYNOCATCH_H
#define CHAPTER1_1_13_MAKE2DARRAYNOCATCH_H

using namespace std;

template <class T>
void make2dArray(T ** &x, int numberOfRows, int numberOfColumns){
    x = new T * [numberOfRows];

    for (int i=0; i<numberOfRows; i++){
        x[i] = new T [numberOfColumns];
    }
}

#endif //CHAPTER1_1_13_MAKE2DARRAYNOCATCH_H
