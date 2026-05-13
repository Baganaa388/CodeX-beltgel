#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int number;
    int sol[4] = {0};  // 1-ээс 4 хүртэлх хүмүүсийн тоог тоолно

    while (n--) {
        cin >> number;
        sol[number - 1]++;
    }

    int result = 0;

    // 3 хүнтэйг 1 хүнтэй хослуулна
    int pair_3_and_1 = min(sol[2], sol[0]);
    result += pair_3_and_1;
    sol[2] -= pair_3_and_1;
    sol[0] -= pair_3_and_1;

    // Үлдсэн 3-ууд тусдаа сууна
    result += sol[2];

    // 2 хүнтэй багууд
    result += sol[1] / 2;
    if (sol[1] % 2 == 1) {
        result += 1; // Сондгой 2-той баг үлдвэл
        sol[0] = max(0, sol[0] - 2); // Түүн дээр 2 нэг хүнтэйг нэмээд 4 болгоно
    }

    // 4 хүнтэй багууд
    result += sol[3];

    // Үлдсэн 1-үүд
    result += sol[0] / 4;
    if (sol[0] % 4 != 0)
        result++;

    cout << result;
    return 0;
}
