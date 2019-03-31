//
// Created by tuhaoxin on 2019-03-31.
//

#ifndef CHAPTER1_1_12_DELETE2DARRAY_H
#define CHAPTER1_1_12_DELETE2DARRAY_H

using namespace std;

template <class T>
void delete2dArray(T ** &theArray, int numberifRows){
    for (int i=0; i<numberifRows; i++){
        delete [] theArray[i];
    }
    delete [] theArray;
}

#endif //CHAPTER1_1_12_DELETE2DARRAY_H
