/**
Program: Roman numerals
Filename: roman_numerals.cpp
@author: © Bob Roberts 
@version: 0.0.2
Last update: 29/10/13
Descritpion: converts an interget into a roman numeral
*/

int getAnswer(int); //prototype 

#include <iostream>
using namespace std;

int main(){
	long number;

	const int I = 1;       
	const int V = 5;
	const int X = 10;
	const int L = 50;
	const int C = 100;
	const int D = 500;       
	const int M = 1000;

	for(int i = 0; i < 20; ++i){
		cout << "Please enter a number to translate into a roman numeral: ";
		cin >> number;
		string answer;
		answer = getAnswer(number);
		cout << answer << endl;
	}




	cin.ignore();
	cin.get();
	return 0;
}

int getAnswer (int number){
	while(number != 0){
		while(number >= 1000){
			cout << "M";
			number += -1000;
		}
		while(number >= 500){
			cout << "D";
			number += -500;
		}
		while(number >= 100){
			cout << "C";
			number += -100;
		}
		while(number >= 50){
			cout << "L";
			number += -50;
		}
		while(number >= 10){
			cout << "X";
			number += -10;
		}
		while(number >= 5){
			cout << "V";
			number += -5;
		}
		while(number >= 1){
			cout << "I";
			number += -1;
		}
	}
}
