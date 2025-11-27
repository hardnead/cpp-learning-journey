#include <bits/stdc++.h>
using namespace std;
int main(){
    // Type Conversion = Implicit = Convenient, and Explicit = Clear intent, More safe

    // Implicit, Example:
    // Numeric Promotion (Auto Upgrade)
    int a = 10;
    double b = a;
    cout << "This is " << b << " ( Integer -> Double )" << endl;
    float x = 3.142f;
    double y = x;
    cout << "This is " << x << " ( Float -> Double )" << endl;
    double f = 1000.32;
    int change = f + 100; // 100.32 -> 100
    cout << "This is " << change << " ( Double -> Integer )" << endl;
    
    // Char to Int (ASCII Magic)
    char grade = 'A';
    int ascii = grade;
    cout << "This is " << ascii << " ( Character -> Integer )" << endl;
    char c = '5';
    int num = c;
    cout << "This is " << num << " ( Character -> Integer )" << endl;

    // Arithmetic Operations
    int jk = 10;
    double yk = 3.14;
    double myResult = jk + yk;
    cout << "This is " << myResult << " ( Integer -> Double )" << endl;

    int ay = 7; double by = 2; // (double -> integer == 3.0 != 3.5)
    double division = ay / by;
    cout << "This is " << division << " ( Integer -> Double )" << endl;
    
    // Boolean Conversion (true and false)
    int xb = 0; // (Example: XB; This is true, but xb = 0 then false)
    if (xb) {
        cout << "This is XB" << endl;
    } else {
        cout << "This is NOT XB" << endl;
    }
    bool flag = 100;
    cout << "This is a " << flag << endl;

    // Explicit, Example:
    // C-Style Cast (Traditional)
    double price = 99.99;
    int truncated = int(price);
    cout << "This is a " << truncated << endl;
    char letter = (char)65;
    cout << "This is a letter " << letter << " ....." << endl;

    // Static Cast (Modern C++)
    double pi = 3.14159;
    int approx = static_cast<int>(pi);
    cout << approx << endl;
    void* ptr = &pi;
    double* doublePtr = static_cast<double*>(ptr);
    cout << "This is a " << doublePtr << endl;

    // Const Cast (Hapus Const)
    const int safeValue = 100;
    int* dangerousPtr = const_cast<int*>(&safeValue);
    cout << "This is a " << dangerousPtr << endl;
    // *dangerousPtr = 200; RISKY! Undefined Behavior!
    
    // String Conversions
    // String -> Nuymber (Explicit)
    string numberStr = "123";
    int num = stoi(numberStr); // "123" -> 123
    cout << "This is a " << num << endl;
    double decimal = stod("3.14"); // "3.14" -> 3.14
    cout << "This is a " << decimal << endl;

    // Number -> String (Explicit)
    int age = 25;
    string ageStr = to_string(age); // 25 -> "25"
    cout << "This is a " << ageStr << endl;
    // Decimal, Float --> Integer 
    double mty = 26.90;
    int agemty = int(mty);
    int agemty = round(mty);
    int agemty = floor(mty);
    cout << agemty << endl;

    // Macam-Macam Pembulatan dalam C++
    // round() -> Pembulatan BIASA
    // Rule: ≤ 0.5 → bawah, > 0.5 → atas
    double dx = 3.4;
    double ex = 3.6;
    cout << round(dx) << endl; // 3 (3.4 -> 3)
    cout << round(ex) << endl; // 4 (3.6 -> 4)

    // floor() -> Pembulatan ke BAWAH
    // Rule: Potong semua decimal, ambil yang bawah!
    double ax = 3.2;
    double bx = 3.9;
    cout << floor(ax) << endl; // 3 (3.2 -> 3)
    cout << floor(bx) << endl; // 3 (3.9 -> 3)

    // ceil() -> Pembulatan ke ATAS
    double fx = 3.1;
    double fy = 3.0001;
    cout << ceil(fx) << endl; // 4 (3.1 -> 4)
    cout << ceil(fy) << endl; // 4 (3.0001 -> 4)
    return 0;
}