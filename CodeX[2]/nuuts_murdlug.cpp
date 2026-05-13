#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // Жагсаалтын урт
    vector<string> first_list(n);
    vector<string> second_list(n);

    // Анхны жагсаалтыг оруулах
    for (int i = 0; i < n; i++) {
        cin >> first_list[i];
    }

    // Хоёр дахь жагсаалтыг оруулах
    for (int i = 0; i < n; i++) {
        cin >> second_list[i];
    }

    // Анхны жагсаалтын үгсийг нэг бүрчлэн шалгана
    for (const string& word : first_list) {
        bool found = false;  // Үгийг олсон эсэхийг шалгах хувьсагч
        for (int i = 0; i < second_list.size(); i++) {
            if (word == second_list[i]) {  // Хэрвээ үг хоёр дахь жагсаалтад байгаа бол
                second_list.erase(second_list.begin() + i);  // Үгийг хасна
                found = true;  // Олдсон гэж тэмдэглэнэ
                break;  // Дараагийн үг рүү шилжинэ
            }
        }
        if (!found) {  // Хэрвээ үг олдсонгүй бол
            cout << word << endl;  // Тухайн үгийг хэвлэнэ
            break;  // Программыг зогсооно
        }
    }

    return 0;
}
