#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	char StrOne[10], StrTwo[10];                                    //Курица в ажуре из картофеля
	int NumOne, NumTwo;						//Не знаю, как назвать это блюдо.. Может вы мне подскажете..
									//Но могу сказать, что готовится оно очень просто и быстро... Я думаю, украсит любой стол..
 									//И вкусно.. Это как бы ленивый вариант рецепта "Зразы с мясом".. который я вам показывала...
	ofstream fout("output.txt", ios_base::out | ios_base::trunc);   //но выглядит на тарелке, пожалуй, поэффектнее.
	ifstream fin("input.txt");					//Ингредиенты для «Курица в ажуре из картофеля»:
									//	Грудка куриная (крупные) — 2 шт
	fin >> StrOne >> StrTwo;					//	Картофель (сырой, средней величины) — 6 шт
	NumOne = atoi(StrOne); NumTwo = atoi(StrTwo);			//	Яйцо куриное — 1 шт
									//	Мука пшеничная / Мука — 2 ст. л.
	if (NumOne == NumTwo) fout << '=';				//	Сыр твердый (тертый) — 100 г
	else if (NumOne > NumTwo) fout << '>';				//	Петрушка (зелень) — 1 пуч.
	else fout << '<';						//	Соль — по вкусу
									//	Перец черный
	fin.close();							//	Масло растительное
	fout.close();
}
