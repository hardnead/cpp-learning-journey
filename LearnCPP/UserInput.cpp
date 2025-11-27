#include <bits/stdc++.h>
using namespace std;
int main(){
    int myAge; string myName;
    cout << "Berapakah Umurmu? "; // Hati-Hati input buffer baca "\n";
    cin >> myAge; cin.ignore();
    cout << "Siapakah Namamu? ";
    getline(cin, myName);
    cout << "Halo " << myName << ", umur " << myAge << endl;

    return 0;
}


