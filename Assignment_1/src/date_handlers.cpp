#include "../headers/date_handlers.hpp"

int cmp_date(date &a, date &b) {
    if (a.year != b.year) return a.year < b.year ? -1 : 1;
    if (a.month != b.month) return a.month < b.month ? -1 : 1;
    if (a.day != b.day) return a.day < b.day ? -1 : 1;
    return 0;
}

void swap(date &a, date &b) {
    if (&a == &b) return;
    date tmp = a;
    a = b; b = tmp;
}

void sort_date(date d[], int n) {
    for (int i = 0; i < n; i ++)
        for (int j = i + 1; j < n; j ++)
            if (cmp_date(d[i], d[j]) == 1)
                swap(d[i], d[j]);
}

void output_date(date &d, std::ofstream &cout) {
    cout << d.year << ' ' << d.month << ' ' << d.day << '\n';
}

bool input_date(date &d, std::ifstream &cin) {
    cin >> d.year >> d.month >> d.day;
    if (d.year == -1 || d.month == -1 || d.day == -1) return false;
    return true;
}