// This is Variable and Data Types in C++
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; //declaration
    x = 5 + 10; //assignment
    x = x + 5; // (20)
    x = x + 2*(3+4); // 20 + 2(7) -> 20 + 14 = 34
    cout << x << "\n";

    cout << endl;

    int a, b, sum;
    a = 5, b = 6;
    sum = a + b;
    cout << a << ", "<< b << ", " << sum << "\n";

    cout << endl;

    // Integer (Whole Number)
    int age = 21, year = 2023, days = 7.5;
    cout << age << ", " << year << ", " << days << "\n";

    cout << endl;

    // Double (Number Incluiding Decimal)
    double price = 10.99, gpa = 2.5, temperature = 25.1;
    cout << price << ", " << gpa << ", " << temperature << "\n";
    
    cout << endl;

    // Single Character 
    char grade = 'A', initial = 'B', dollarSign = '$';
    cout << grade << " " << initial << " " << dollarSign << "\n";
    
    cout << endl;

    // Boolean (true or false)
    bool isStudent = true;
    bool power = true;
    bool forSale = true;

    if (isStudent = false) {
        cout << "Halo saya Danendra\n";
    } else {
        cout << "Kamu bukan Danendra\n";
    cout << endl;
    }

    // String (Objects that represents a sequence of text)
    string firstName = "Danendra ", middleName = " Hardjo", lastName = " Judanto";
    int myAge = 18;
    string day = "Saturday";
    string favFood = "Meetball";
    string myAddress = "Indonesian";
    cout << "Hello my name is " << firstName + middleName + lastName << "\n";
    cout << "My age is " << myAge << " and my favorite food is " << favFood << "\n";
    cout << "And i like playing football on " << day << "\n";
    cout << "And i from " << myAddress << "\n";
    cout << endl;

    return 0;
}