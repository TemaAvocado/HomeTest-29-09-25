#include <iostream>
using namespace std;

int main() {
    int A, B, trys = 0;
    cout << "Введите число A" << endl;
    cin >> A;
    cout << "Введите число B" << endl;
    cin >> B;
    if (A < B){
        cout << "А должно быть больше В" << endl;
        return 1;
    }
    else{
        while (A > B){
            if (A % 2 == 0 && A / 2 >= B){
                A /= 2;
                trys += 1;
            }
            else{
                A -= 1;
                trys += 1;
            }
        }
        cout << trys << endl;
        return 0;
    }
}