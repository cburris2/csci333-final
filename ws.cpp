#include <iostream>
#include <sstream>

using namespace std;

int main() {
    char a[10], b[10];

    istringsteam iss ("one \n \t two");
    iss >> noskipws;
    iss >> a >> ws >> b;
    cout << a << "," << b << endl;

    return 0;
}
