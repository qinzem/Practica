using namespace std;

int nextEven(int n) {
    return (n / 2 + 1) * 2;
}

int main() {
    int n;
    cin >> n;
    cout << nextEven(n);
    return 0;
}