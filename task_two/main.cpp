#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char one[1000], two[1000];
    int sum;

    ofstream fout("output.txt", ios_base::out | ios_base::trunc);
    ifstream fin("input.txt");

    fin >> one >> two;
    sum = atoi(one) + atoi(two);
    fout << sum;

    fin.close();
    fout.close();
}
