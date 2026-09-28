#include <iostream>
using namespace std;

class Solver {
public:
    int solve(int n) {
        return (n / 2 + 1) * 2;
    }
};

int main() {
    int n;
    cin >> n;
    
    Solver s;
    cout << s.solve(n);
    return 0;
}