//
// Created by tuhaoxin on 2019-03-29.
//

#include <iostream>

using namespace std;

int abc(int a, int b, int c){
    if (a <= 0 || b <= 0 || c<= 0)
        throw "All parameters should be > 0";
    return a + b * c;
}

/*
int main(){
    try {
        cout << abc(2,1,4) << endl;
    }
    catch (char * e){
        cout << "The parameters to abc were 2, 0, 4" << endl;
        cout << "An exception has been thrown " << endl;
        cout << e << endl;
        return 1;
    }
    return 0;
}
 */