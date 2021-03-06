#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	char StrOne[10], StrTwo[10];
	int NumOne, NumTwo;

	ofstream fout("output.txt", ios_base::out | ios_base::trunc);
    ifstream fin("input.txt");

    fin >> StrOne >> StrTwo;
    NumOne = atoi(StrOne); NumTwo = atoi(StrTwo);

    if (NumOne == NumTwo) fout << '=';
    else if (NumOne > NumTwo) fout << '>';
    else fout << '<';

    fin.close();
    fout.close();
}