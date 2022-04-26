#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int &b = a;

    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << &a << endl;
    cout << "Nilai dari b: " << b << endl;
    cout << "Alamat dari b: " << &b << endl
         << endl;

    b = 5;
    cout << "Nilai dari b: " << b << endl;
    cout << "Nilai dari a: " << a << endl
         << endl;
    a = 100;
    cout << "Nilai dari b: " << b << endl;
    cout << "Nilai dari a: " << a << endl;

    cin.get();
    return 0;
}