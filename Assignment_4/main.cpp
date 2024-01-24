#include "./headers/header.hpp"

int main() {

    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n, d;
    int a[2005];

    input(a, n, d);
    int ans = process(a, n, d);
    output(ans);

    return 0;
}