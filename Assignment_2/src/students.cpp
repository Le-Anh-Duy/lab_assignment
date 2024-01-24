#include "../headers/students.hpp"

void load_data(student &dest, std::ifstream &inp) {
    std::getline(inp, dest.id, ',');
    std::getline(inp, dest.name, ',');
    inp >> dest.gpa;
    inp.ignore();
}

void put_data(student &src, std::ofstream &out) {
    out << src.id << ',' << src.name << ',' << src.gpa << '\n';
}

int cmp(student &a, student &b) {
    if (a.gpa == b.gpa) return 0;
    return a.gpa < b.gpa ? -1 : 1;
}

student find_max(student stu[], int n) {
    int idx = 0;
    for (int i = 0; i < n; i ++)
        if (cmp(stu[idx], stu[i]) == -1) 
            idx = i;
    return stu[idx];
}