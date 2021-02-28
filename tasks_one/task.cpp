#include <iostream>

using namespace std;

int main(){
    int array[30];
    cout << "array: ";
    for(int i = 0; i < 30; i++){
    	array[i] = rand();
    	cout << array[i] << " ";
    }
    cout << endl << "odd numbers: ";

    for(int i = 0; i < 30; i++){
    	if(array[i]%2 != 0){
    		cout << array[i] << " ";
    	}
    }
};