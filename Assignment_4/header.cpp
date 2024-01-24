#include "./headers/header.hpp"

void input(int a[], int &n, int &d) {
    std::cin >> n >> d;
    for (int i = 0; i < n; i ++)
        std::cin >> a[i];
}

int process(int a[], int n, int d) {
    int last = 0, ans = 0;

    for (int i = 0; i < n; i ++) {
        if (a[i] > last) {
            last = a[i];
            continue;
        }

        int times = (last - a[i]) / d + 1;
        last = a[i] + 1ll * times * d;
        ans += times;
    }

    return ans;
}

void output(int x) {
    std::cout << x << '\n';
}