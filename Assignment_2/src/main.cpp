#include "../headers/students.hpp"

void input(student stu[], int &n, char dir[]) {
    std::ifstream inp;
    inp.open(dir);
    if (!inp.is_open()) {
        std::cout << "fail open file";
        exit(-1);
    }
    
    n = 0;
    while (!inp.eof()) {
        load_data(stu[n], inp);
        n ++;
    }

    inp.close();
}

void output(student stu[], int n, char dir[]) {
    std::ofstream out;
    out.open(dir);

    out << std::setprecision(1) << std::fixed;
    student best = find_max(stu, n);
    put_data(best, out);

    out.close();
}

int main() {

    student stu[100];
    int n;

    input(stu, n, "./input.txt");
    output(stu, n, "./honors.txt");

    return 0;
}