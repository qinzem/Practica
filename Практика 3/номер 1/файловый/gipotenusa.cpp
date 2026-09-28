#include <cmath>
#include "stepen.h"
using namespace std;

double gipotenusa(double a, double b) {
    double v = stepen(a);
    double q = stepen(b);
    return sqrt(v + q);
}
