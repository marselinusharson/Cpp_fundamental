#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    // pointer

    int *pointer_of_a = &a;

    cout << "nilai dari a: " << a << endl;
    cout << "alamat dari a: " << &a << endl;
    cout << "alamat dari a: " << pointer_of_a << endl;

    // dereferencing: mengambil nilai dari sebuah pointer
    cout << "mengambil nilai dari pointer:  " << *pointer_of_a << endl;

    cin.get();
    return 0;
}