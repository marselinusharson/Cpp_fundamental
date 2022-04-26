#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 5> data = {1, 2, 3, 4, 5};
    cout << "Ukuran dari array = " << data.size() << endl;
    cout << "nilai index-2 = " << data.at(2) << endl;
    cout << "Alamat pertama = " << data.begin() << endl;
    cout << "Alamat terakhir = " << data.end() << endl;

    cin.get();
    return 0;
}