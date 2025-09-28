#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double S, V0, a, diskr, t;
    cout << "Введите величины S, V0, a" << endl;
    cin >> S;
    cin >> V0;
    cin >> a;
    if (a == 0){
        cout << "Ускорение не может равняться 0!" << endl;
        return 1;
    }
    diskr = V0 * V0 + 2 * a * S;
    if (diskr < 0){
        cout << "Невозможно определить скорость!" << endl;
        return 1;
    }
    else{
        double t1 = (-V0 + sqrt(diskr)) / a;
        double t2 = (-V0 - sqrt(diskr)) / a;
        if (t1 >= 0 && t2 >= 0){
            t = min(t1, t2);
        }
        else if (t1 >= 0){
            t = t1;
        }
        else if (t2 >= 0){
            t = t2;
        }
        else{
            cout << "Нет решения!" << endl;
            return 1;
        }
        cout << t << endl;
    }
    return 0;
}