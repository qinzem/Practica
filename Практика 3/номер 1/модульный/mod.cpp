 Модульный
 #include <iostream>
 #include <cmath>
 using namespace std;

 int main() {
    int a, b;
    cin >> a;
    cin >> b;
    double v = pow(a, 2); 
    double q = pow(b, 2);
    double c = sqrt(v + q); 
    cout << "Гипотенуза = " << c;
    return 0;
 }
