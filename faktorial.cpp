#include <iostream>

using namespace std;

int faktorial(int n);

int main()
{
    int n;
    cout << "Menghitung faktorial\n";
    cout << "angka: ";
    cin >> n;
    int hasil = faktorial(n);
    cout << "\n"
         << n << " faktorial = " << hasil << endl;
}
int faktorial(int n)
{
    if (n <= 1)
    {
        cout << n;
        return n;
    }
    else
    {
        cout << n << "x";
        return n * faktorial(n - 1);
    }
}