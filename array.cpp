#include <iostream>
using namespace std;

int main()
{
    int data[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai index ke-" << i << " = " << data[i] << " address: " << &data[i] << endl;
    }
    cout << endl
         << "using pointer and reference" << endl;
    // akses elemen aray via pointer
    int *ptr = data; // pointer
    // dereferencing
    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai index ke-" << i << " = " << *ptr + i << " address: " << ptr + i << endl;
    }

    return 0;
}
