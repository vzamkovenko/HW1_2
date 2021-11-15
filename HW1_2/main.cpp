//Задание 2
#include<iostream>


int main()

{
	using namespace std;

	setlocale(0, "RU");

	double S;
	double T;
	cout << "Введите значение числа S(км): ";
	cin >> S;
	cout << "Введите значение числа T(ч): ";
	cin >> T;

	double V = S / T;
	cout << "V(км/ч) = " << V << endl;

	return 0;

}