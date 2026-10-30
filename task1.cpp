#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите число сеансов (1..16): ";
    if (!(cin >> n) || n < 1 || n > 16) {
        cout << "Ошибка ввода" << endl;
        return 0;
    }

    double total_revenue = 0;
    double max_revenue = -1;
    int max_session_num = 0;

    for (int i = 1; i <= n; i++) {
        int tickets;
        cout << "Сеанс " << i << ". Введите количество билетов (0..100): ";
        if (!(cin >> tickets) || tickets < 0 || tickets > 100) {
            cout << "Ошибка ввода" << endl;
            return 0;
        }

        double price = (i % 2 != 0) ? 8.0 : 10.0;
        double current_revenue = tickets * price;
        cout << "Выручка сеанса " << i << ": " << current_revenue << endl;

        total_revenue += current_revenue;

        if (current_revenue > max_revenue) {
            max_revenue = current_revenue;
            max_session_num = i;
        }
    }

    cout << "\nСуммарная выручка: " << total_revenue << endl;
    cout << "Номер сеанса с наибольшей выручкой: " << max_session_num << endl;

    return 0;
}
