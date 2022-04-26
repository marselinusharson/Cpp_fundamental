#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> nilai;
    cout << "--Program menampilkan grafik nilai--" << endl;

    for (int i = 0; i < nilai.size(); i++)
    {
        cout << "jumlah mahasiswa dengan nilai ";
        if (i == 0)
        {
            cout << "0 - 9: ";
        }
        else if (i == nilai.size() - 1)
        {
            cout << "90 - 100: ";
        }
        else
        {
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";
        }
        cin >> nilai[i];
    }
    cout << "\nGrafik nilai" << endl;
    for (int i = 0; i < nilai.size(); i++)
    {
        if (i == 0)
        {
            cout << "0 - 9: ";
        }
        else if (i == nilai.size() - 1)
        {
            cout << "90 - 100: ";
        }
        else
        {
            cout << i * 10 << " - " << (i * 10) + 9 << ": ";
        }
        for (int bintang = 0; bintang < nilai[i]; bintang++)
        {
            cout << "\xc4";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}