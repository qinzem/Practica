#include <iostream>
#include <cmath>
using namespace std;

class Treugolnik {
public:
    double a;
    double b;

    double stepen(double x) {
        return pow(x, 2);
    }

    double gipotenusa() {
        double v = stepen(a);
        double q = stepen(b);
        double c = sqrt(v + q);
        return c;
    }
};

int main() {
    Treugolnik t;
    cin >> t.a;
    cin >> t.b;
    double c = t.gipotenusa();
    cout << "Гипотенуза = " << c;
    return 0;
}
