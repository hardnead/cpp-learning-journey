#include <bits/stdc++.h>
using namespace std;
int main(){
    // Constant -> Variable not Declaration
    const double pi = 3.14159, radius = 10, circumference = 2 * pi * radius;
    //pi = 3.14159; radius = 10; circumference = 2 * pi * radius;
    cout << "Circumference is " << circumference << " cm" << endl;

    const double PHI = 3.14159;
    const int LIGHT_SPEED = 2999992202, WIDTH = 1920, HEIGHT = 1080;
    cout << "This is my total " << ((2 + 3/4) * ((PHI * LIGHT_SPEED) * (WIDTH * HEIGHT))) << endl;
    return 0;
}