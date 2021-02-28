#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int proizvedenie(int n){
    string str = to_string(n);
    int result = 1;
    for(int i = 0; i < str.length(); i++){
        result = (str[i] - '0') * result;
    }
    return result;
}
int main(){
    char str[10];
    int write = -1;
    ofstream fout("output.txt", ios_base::out | ios_base::trunc);
    ifstream fin("input.txt");
    fin >> str;
    int number = atoi(str);

    for(int i = 1; i <= 1000000000; i++){
        int res = proizvedenie(i);
        if(res == number){
            write = i;
            break;
            }
        }

    fout << write;
    fin.close();
    fout.close();
}
