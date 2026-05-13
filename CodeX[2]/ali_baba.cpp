#include <iostream>
#include <string>
#include <algorithm>  // reverse функцэд шаардлагатай

using namespace std;

int main() {
    string a;
    cin >> a;                // Хэрэглэгчээс string оруулна

    string b = a;            // 'a'-г 'b'-д хуулж өгнө
    reverse(b.begin(), b.end());  // 'b'-г урвуу болгоно

    if (a == b) {
        cout << "YES" << endl;    // Палиндром байвал "YES"
    } else {
        cout << "NO" << endl;     // Үгүй бол "NO"
    }

    return 0;
}
