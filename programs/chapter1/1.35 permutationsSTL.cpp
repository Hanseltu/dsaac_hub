//
// Created by tuhaoxin on 2019-03-31.
//

#include <iostream>
#include <algorithm> // has copy & next_permutation

using namespace std;

template<class T>
void permutations(T list[], int k, int m)
{// Generate all permutations of list[k:m].
    // Assume k <= m.
    // output the permutations one by one
    do {
        copy(list, list+m+1,
             ostream_iterator<T>(cout, " "));
        cout << endl;
    } while (next_permutation(list, list+m+1));
}

/*
int main()
{
    char a[] = {'1', '2', '3', '4'};

    cout << "The permutations of 1 are" << endl;
    permutations(a, 0, 0);

    cout << "The permutations of 123 are" << endl;
    permutations(a, 0, 2);

    cout << "The permutations of 1234 are" << endl;
    permutations(a, 0, 3);
    return 0;
}
 */