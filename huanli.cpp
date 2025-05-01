#include <iostream>

using namespace std;

int main() {
    int a;                       // Нийт минутын тоог хадгалах хувьсагч
    cin >> a;                    // Хэрэглэгчээс минутын тоог оруулна

    int hour = a / 60;           // Цагийг тооцоолно (жишээ нь: 130 / 60 = 2 цаг)
    int minut = a % 60;          // Үлдсэн минутыг тооцоолно (130 % 60 = 10 минут)

    cout << hour << endl;        // Цагийг хэвлэнэ
    cout << minut << endl;       // Минутыг хэвлэнэ

    return 0;
}
