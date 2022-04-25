#include <iostream>

using namespace std;
int pangkatRekursif(int a, int b);

int main()
{
    int a, b;

    cout << "Rekursif function" << endl;
    cout << "angka: ";
    cin >> a;
    cout << "pangkat: ";
    cin >> b;

    cout << "3 pangkat 6 = " << pangkatRekursif(a, b);
}
int pangkatRekursif(int a, int b)
{
    int i = b;

    while (i > 1)
    {
        return a * pangkatRekursif(a, b - 1);
    }
    return a;
}