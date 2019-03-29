//
// Created by tuhaoxin on 2019-03-29.
//

#include <iostream>

using namespace std;

template <class T>
void permutations(T list[], int k, int m){
    int i;
    if (k == m){
        copy(list, list+m+1, ostream_iterator<T>(cout," "));
        cout << endl;
    }

    else {
        for (i = k; i <= m; i++){
            swap(list[k], list[i]);
            permutations(list,k+1,m);
            swap(list[k],list[i]);
        }
    }
}


int main(){
    char a[] = {'1', '2', '3', '4'};

    cout << "The permutations of 1 are" << endl;
    permutations(a, 0, 0);

    cout << "The permutations of 123 are" << endl;
    permutations(a, 0, 2);

    cout << "The permutations of 1234 are" << endl;
    permutations(a, 0, 3);
    return 0;
}
