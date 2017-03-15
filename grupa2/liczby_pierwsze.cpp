#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;
    int reszta = 0;

    for (int i = 2; i <= sqrt(n); i++) {
        reszta += n % i;
        if ( reszta == 0) {
            cout << "zlozona" << endl;
            return 0;
        }
    }
    cout << "pierwsza" << endl;

    return 0;
}
