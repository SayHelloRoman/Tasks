#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int factorial(int number){
    int f = 1;

    for(int i = 1;i <= number;i++){
        f = f * i;
    }
    return f;
    
}

int main()
{
    char str[1000];
    ofstream fout("output.txt", ios_base::out | ios_base::trunc);
    ifstream fin("input.txt");

    fin >> str;
    fout << factorial(atoi(str));

    fin.close();
    fout.close();
}
