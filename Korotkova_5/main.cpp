#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Выполнила студентка группы УЗС-111 Короткова Анастасия Игоревна\n";
	cout << "Программа для рассчёта вклада\n";

	double M, V, N;
	double vklad = 0;

	cout << "Введите сумму, вкладываемую мужем M: ";
	cin >> M;
	cout << "Введите сумму, вкладываемую женой V: ";
	cin >> V;
	cout << "Введите стоимость автомобиля N: ";
	cin >> N;

	int k = 0;
	while (vklad < N)
	{
		vklad *= 1.12;
		vklad += M + V;
		k++;
		cout << "Месяц " << k << ", на счету " << vklad << "\n";
	}
	cout << "На " << k << "-й месяц поедут в собственном авто\n";

	system("pause");
}
