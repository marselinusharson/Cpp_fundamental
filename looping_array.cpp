#include <iostream>
using namespace std;

int main()
{

    // looping untuk array pada C++ 11 ke atas

    /*
        for(declarasi variable : array){
            statement
        }
    */

    int values[5] = {0, 1, 2, 3, 4};

    for (int value : values)
    {
        cout << "address = " << &value << ", value = " << value << endl;
    }
    cout << endl;

    for (int &value : values)
    {
        value *= 2;
        cout << "address = " << &value << ", value = " << value << endl;
    }
    cout << endl;

    for (int value : values)
    {
        cout << "address = " << &value << ", value = " << value << endl;
    }
    cout << endl;
    return 0;
}