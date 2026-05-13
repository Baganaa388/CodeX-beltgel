#include <iostream>

using namespace std;

int main() {
    int a;                      // Бүхэл тоо хадгалах хувьсагч
    cin >> a;                   // Хэрэглэгчээс тоо оруулна

    if (a % 2 == 0) {           // Хэрэв тоо тэгш байвал (2-т хуваагдаж байвал)
        cout << "PAST" << endl; // "PAST" гэж хэвлэнэ
    } else {                    // Хэрэв сондгой бол
        cout << "FUTURE" << endl; // "FUTURE" гэж хэвлэнэ
    }

    return 0;
}
