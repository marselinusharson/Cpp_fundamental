#include <iostream>
using namespace std;

int main()
{
    int data[5] = {1, 2, 7, 4, 5};

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

    cout << "Ukuran dari array: " << sizeof(data) / sizeof(int) << endl;

    // maksimum value of array
    int max = data[0];
    for (int i = 1; i < 5; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
    }
    cout << "maksimal of array: " << max << endl;

    return 0;
}
