#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int a;
    string inrim = "";
    cout << "Введите число а:" << endl;
    cin >> a;
    if ((a > 1000) || (a < 1)){
        cout << "Введите a от 1 до 1000!" << endl;
        return 1;
    }
    else{
        string one[] = {"", "M"};        
        string two[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};        
        string three[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};        
        string four[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        inrim += one[a / 1000];        
        inrim += two[(a % 1000) / 100];        
        inrim += three[(a % 100) / 10];        
        inrim += four[a % 10];
    }
    cout << inrim << endl;
    return 0;
}
