// k863. 清朝年號轉換

#include<iostream>
using namespace std;

int main(){
    string a;
    int b;
    cin >> a >> b;
    if (a == "ShunZhi")
        cout << 1644 + b - 1 << endl;
    else if (a == "KangXi")
        cout << 1662 + b - 1 << endl;
    else if (a == "YongZheng")
        cout << 1723 + b - 1 << endl;
    else if (a == "QianLong")
        cout << 1736 + b - 1 << endl;
    else if (a == "JiaQing")
        cout << 1796 + b - 1 << endl;
    else if (a == "DaoGuang")
        cout << 1821 + b - 1 << endl;
    else if (a == "XianFeng")
        cout << 1851 + b - 1 << endl;
    else if (a == "TongZhi")
        cout << 1862 + b - 1 << endl;
    else if (a == "GuangXu")
        cout << 1875 + b - 1 << endl;
    else if (a == "XuanTong")
        cout << 1909 + b - 1 << endl;
    return 0;
}
