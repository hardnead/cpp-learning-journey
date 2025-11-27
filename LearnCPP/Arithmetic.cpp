#include <bits/stdc++.h>
using namespace std;
int main(){
    // Arithmetic Operator (+, -, *, /)
    int myBurger = 20; // 20
    myBurger = myBurger += 20; // 20 + 20 = 40
    myBurger -= 20; // 40 - 20 = 20
    myBurger += 20 + 20; // 60
    myBurger = (myBurger * 100) / 30;
    cout << "My Burger is " << myBurger;

    cout << endl; 

    // This is modulo 
    int myCar = 10;
    myCar = myCar * 10;
    myCar %= 20;
    myCar += 20;
    myCar += myBurger;
    cout << "This is myCar Now " << myCar << " ....." << "\n";
    return 0;
}