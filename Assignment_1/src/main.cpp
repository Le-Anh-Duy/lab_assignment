#include "../headers/date_handlers.hpp"

void input_file(date d[], int &n, char* dir) {
    std::ifstream inp;
    inp.open(dir);

    if (!inp.is_open()) {
        std::cout << "faild open file\n" << dir << '\n';
        exit(-1);
    }

    n = 0;
    while (input_date(d[n], inp)) {
        n ++;
    }

    inp.close();
}

void output_file(date d[], int n, char* dir) {
    std::ofstream out;
    out.open(dir);
    for (int i = 0; i < n; i ++)
        output_date(d[i], out);

    out.close();
}

const int MAX_DATE = 1000;

int main() {
    date d[MAX_DATE];
    int n;

    input_file(d, n, "./input.txt");
    sort_date(d, n);
    output_file(d, n, "./output.txt");

    return 0;    
}