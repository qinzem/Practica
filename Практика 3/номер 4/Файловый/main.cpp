#include <iostream>
#include <fstream>
#include "func.h"
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n;
    in >> n;
    out << nextEven(n);

    in.close();
    out.close();
    return 0;
}