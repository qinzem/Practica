#include <iostream>
#include "gipotenusa.h"
using namespace std;

int main() {
    double a, b;
    cin >> a;
    cin >> b;
    double c = gipotenusa(a, b);
    cout << "Гипотенуза = " << c;
    return 0;
}
