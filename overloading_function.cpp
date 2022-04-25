#include <iostream>
using namespace std;

int luas_kotak(int panjang, int lebar);
int luas_kotak(int sisi);
double luas_kotak(double sisi);
int main()
{
    cout << "luas kotak dengan panjang dan lebar --> 4*5 = " << luas_kotak(4, 5) << endl;
    cout << "luas kotak dengan sisi --> 4 = " << luas_kotak(4) << endl;
    cout << "luas kotak dengan sisi double--> 5.2 = " << luas_kotak(5.2) << endl;

    cin.get();
    return 0;
}

int luas_kotak(int panjang, int lebar)
{
    return panjang * lebar;
}
int luas_kotak(int sisi)
{
    return sisi * sisi;
}
double luas_kotak(double sisi)
{
    return sisi * sisi;
}