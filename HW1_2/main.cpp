//������� 2
#include<iostream>


int main()

{
	using namespace std;

	setlocale(0, "RU");

	double S;
	double T;
	cout << "������� �������� ����� S(��): ";
	cin >> S;
	cout << "������� �������� ����� T(�): ";
	cin >> T;

	double V = S / T;
	cout << "V(��/�) = " << V << endl;

	return 0;

}