#include <bits/stdc++.h>
using namespace std;
// Namespace itu di Global Scope
// Namespace itu kayak lemari (:: -> Scope Resolution Operator)
namespace firstNumber {
    int x = 100;
} 
namespace secondNumber {
    int y = 200;
}
int main() {
    using namespace std; // Same Effect, but no error
    using namespace firstNumber;
    cout << x << endl; // 100
    using namespace secondNumber;
    cout << y << endl; // 200
    int xy = 0;
    xy = firstNumber::x + secondNumber::y;
    cout << xy << "\n"; // 100 + 200
    cout << firstNumber::x + secondNumber::y << endl; // 100 + 200
    return 0;
}