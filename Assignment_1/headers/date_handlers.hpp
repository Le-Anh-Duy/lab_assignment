#include <iostream>
#include <fstream>

struct date
{
    int year;
    int month;
    int day;
};

int cmp_date(date &a, date &b);
void swap(date &a, date &b);
void sort_date(date d[], int n);
void output_date(date &d, std::ofstream &cout);
bool input_date(date &d, std::ifstream &cin);
