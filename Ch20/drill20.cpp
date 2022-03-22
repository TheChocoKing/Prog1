#include "std_lib_facilities.h"

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};

    vector<int> v{0,1,2,3,4,5,6,7,8,9};

    list<int> l{0,1,2,3,4,5,6,7,8,9};

    
    int array2[10];

    copy(begin(array), end(array), begin(array2));

    vector<int> v2 = v;

    list<int> l2 = l;

    for(int& i : array)
        i += 2;

    for(int& i : v)
        i += 3;
    
    for(int& i : l)
        i += 5;

    for(int i = 0; i < 10; i++)
        cout << array[i];

    return 0;
}