#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите число мест в зале N (1..100): ";
    if (!(cin >> n) || n < 1 || n > 100) {
        cout << "Ошибка ввода" << endl;
        return 0;
    }

    int current_seat;
    int prev_seat = -1; 
    int valid_count = 0;
    int duplicate_pairs_count = 0;

    cout << "Вводите номера занятых мест (0 для завершения):" << endl;
    while (cin >> current_seat && current_seat != 0) {
        if (current_seat < 1 || current_seat > n) {
            // Игнорируем некорректный ввод по условию
            continue; 
        }

        valid_count++;

        if (prev_seat != -1 && current_seat == prev_seat) {
            duplicate_pairs_count++;
        }

        prev_seat = current_seat;
    }

    cout << "\nКоличество принятых записей: " << valid_count << endl;
    cout << "Количество повторений соседних мест: " << duplicate_pairs_count << endl;

    return 0;
}
