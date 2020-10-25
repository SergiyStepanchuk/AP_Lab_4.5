// Степанчук Сергій 
// Лабораторна робота № 4.5
// Табуляція функції, заданої графіком
// Варіант 20

#include <iostream> 
#include <iomanip>

using namespace std;

void main() {
	cout.setf(ios::left);
	srand((unsigned)time(NULL));
	cout << fixed;

	double x, y;
	int i;

	cout << "----------------1---------------" << endl; // 32

	for (i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (
			(y <= -x && y >= pow(x - 2, 2) - 3) ||
			(y >= 0 && y <= pow(x - 2, 2) - 3 && y <= x)
			)
			cout << "yes";
		else cout << "no";
		cout << endl << endl;
	}

	cout << endl << "----------------2---------------" << endl; // 32
	cout << "|" << setw(9) << "x" << " |" << setw(9) << "y" << "|" << setw(9) << "status" << "|" << endl; // 9
	cout << "--------------------------------" << endl; // 32

	for (i = 0; i < 10; i++)
	{
		x = rand() % 7 - 1;
		y = rand() % 9 - 3;

		cout << "|" << setw(9) << setprecision(2) << x << " |" << setw(9) << setprecision(3) << y << "|" << setw(9);
			
		if (
			(y <= -x && y >= pow(x - 2, 2) - 3) ||
			(y >= 0 && y <= pow(x - 2, 2) - 3 && y <= x)
		)
			cout << "yes";
		else cout << "no";

		cout << "|" << endl << "--------------------------------" << endl; // 32
	}
}
