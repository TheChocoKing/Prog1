#include "std_lib_facilities.h"
#include "Matrix.h"

using namespace Numeric_lib;

template<typename T>
void print_1D(Matrix<T>& a)
{
    for (int i=0; i<a.dim1(); ++i)
    {
        cout << a(i) << "\t";
    }
    cout << "\n";
}



int main()
{
    cout << "Char size: " << sizeof(char) << "\n";
    cout << "Short size: " << sizeof(short) << "\n";
    cout << "Int size: " << sizeof(int) << "\n";
    cout << "Long size: " << sizeof(long) << "\n";
    cout << "Float size: " << sizeof(float) << "\n";
    cout << "Double size: " << sizeof(double) << "\n";
    cout << "Int* size: " << sizeof(int*) << "\n";
    cout << "Double* size: " << sizeof(double*) << "\n";

    Matrix<int> a(10);
    Matrix<int> b(100);
    Matrix<double> c(10);
    Matrix<int,2> d(10,10);
    Matrix<int,3> e(10,10,10);

    cout << "Matrix size 'a': " << sizeof(a) << " Number of elements: " << a.size() << "\n";
    cout << "Matrix size 'b': " << sizeof(b) << " Number of elements: " << b.size() << "\n";
    cout << "Matrix size 'c': " << sizeof(c) << " Number of elements: " << c.size() << "\n";
    cout << "Matrix size 'd': " << sizeof(d) << " Number of elements: " << d.size() << "\n";
    cout << "Matrix size 'e': " << sizeof(e) << " Number of elements: " << e.size() << "\n";

    print_1D(a);
    print_1D(b);
    print_1D(c);

    vector<int> int_values;

    for(int i = 0; i = 4; i++)
        

    return 0;
}