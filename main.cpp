#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ilu uczniow jest w klasie?:" ;
    cin >> uczniowie;
    cout << "Ilu cukierkow kupila mama?:" ;
    cin >> cukierki;

    x = cukierki/(uczniowie -1);
    cout << "Cukierkow dla kazdego ucznia:"<< x;

    y = cukierki -x*(uczniowie - 1);
    cout <<endl<< "Zostanie cukierkow dla Jasia:"<< y;
    return 0;
}
