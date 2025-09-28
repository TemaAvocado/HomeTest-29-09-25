#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int A, B, N;
    cout << "Введите А" << endl;
    cin >> A;
    cout << "Введите B" << endl;
    cin >> B;
    cout << "Введите N" << endl;
    cin >> N;
    
    if (N > A + B) {
        cout << "mission impossible 2" << endl;
        return 0;
    }
    
    int a = 0, b = 0;
    
    for (int step = 0; step < 1000; step++) {
        
        if (a == N || b == N || a + b == N) {
            return 0;
        }
        
        if (b == 0) {
            b = B;
            cout << "> B" << endl;
            continue;
        }
        
        if (a == A) {
            a = 0;
            cout << "A >" << endl;
            continue;
        }
        
        if (b > 0 && a < A) {
            int pour = min(b, A - a);
            b -= pour;
            a += pour;
            cout << "B > A" << endl;
            continue;
        }
        
        
        if (a == 0) {
            a = A;
            cout << "> A" << endl;
            continue;
        }
        
        
        if (b == B) {
            b = 0;
            cout << "B >" << endl;
            continue;
        }
        
        
        int pour = min(a, B - b);
        a -= pour;
        b += pour;
        cout << "A > B" << endl;
    }
    
    
    cout << "mission impossible 2" << endl;
    return 0;
}