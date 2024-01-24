#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

struct student {
    std::string id;
    std::string name;
    float gpa;
};

void load_data(student &dest, std::ifstream &inp);
void put_data(student &src, std::ofstream &out);
int cmp(student &a, student &b);
student find_max(student stu[], int n);
