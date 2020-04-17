#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	/*int a1, a2, a3, a4, a5, a6;

	int num;

	cout << "Введiть шестизначне число" << endl;
	cin >> num;

	a1 = num / 100000;
	a2 = num / 10000 % 10;
	a3 = num / 1000 % 10;
	a4 = num / 100 % 10;
	a5 = num / 10 % 10;
	a6 = num % 10;



	if (a1+a2+a3 == a4+a5+a6 ) {

		cout << "Вам пощастило: )" << endl;
	}
	else {
		cout << "Число не є щасливим" << endl;
	}
	if (num > 999999 || num < 100000) {
		cout << "Error";
	}*/





	/*int num;
	int a1, a2, a3, a4;

	cout << "Enter number:" << endl;
	cin >> num;

	a1 = num / 1000 % 10;
	a2 = num / 100 % 10;
	a3 = num / 10 % 10;
	a4 = num % 10;

	if (num < 1000 || num>9999) {

		cout << "Error:your number have another parameters" << endl;
	}
	else {
		cout << a2 << a1 << a4 << a3;
	}*/




	//int a, b, c, d, e, f, g;

	//cout << "Enter 7 numbers:" << endl;
	//cin >> a >> b >> c >> d >> e >> f >> g;

	//if (a < b)
	//{
	//	a = b;
	//}
	//if (a < c)
	//{
	//	a = c;
	//}
	//if (a < d)
	//{
	//	a = d;
	//}
	//if (a < e)
	//{
	//	a = e;
	//}
	//if (a < f)
	//{
	//	a = f;
	//}
	//if (a < g)
	//{
	//	a = g;
	//}
	//cout << "Max:" << a;







	/*const int fuel = 300;

	int distance1;
	int distance2;
	int masa;

	int minFuel;
	int test;

	cout << "Растояние между A and B: ";
	cin >> distance1;

	cout << "Растояние между B and C: ";
	cin >> distance2;

	cout << "Маса груза: ";
	cin >> masa;


	if (masa < 500) {

		test = fuel - (distance1 * 1) - distance2;

		if (distance1 > fuel || distance2 > fuel) {
			cout << "Слишком большое растояние" << endl;
		}
		else if (test < 0 && test <= distance2) {
			cout << "\nРасход топлива на 1км -> " << 1 << "литр" << endl;
			cout << "Потрачено топлива от точки А до Б: " << distance1 << endl;
			cout << "Для перелета нужна  дозавтравка!!!" << endl;
			minFuel = fuel - distance1;
			cout << "Минимальная дозаправка - " << distance2 - minFuel << endl;
		}
		else
			cout << "Дозаправка не нужна " << endl;

	}
	if (masa < 1000 && masa >= 500) {

		test = fuel - (distance1 * 4) - (distance2 * 4);

		if (distance1 * 4 > fuel || distance2 * 4 > fuel) {
			cout << "Слишком большое растояние" << endl;
		}
		else if(test < 0 && test <= distance2) {
			cout << "Расход топлива на 1км -> " << 4 << "литра" << endl;
			cout << "Потрачено топлива от точки А до Б: " << distance1 * 4 << endl;
			cout << "Для перелета нужна  дозавтравка!!!" << endl;
			minFuel = fuel - (distance1 * 4);
			cout << "Минимальная дозаправка - " << (distance2 * 4) - minFuel << endl;
		}
		else
			cout << "Дозаправка не нужна " << endl;

	}
	if (masa < 1500 && masa >= 1000) {

		test = fuel - (distance1 * 7) - (distance2 * 7);

		if (distance1 * 7 > fuel || distance2 * 7 > fuel) {
			cout << "Слишком большое растояние" << endl;
		}
		else if (test < 0 && test <= distance2) {
			cout << "Расход топлива на 1км-> " << 7 << "литров" << endl;
			cout << "Потрачено топлива от точки А до Б: " << distance1 * 7 << endl;
			cout << "Для перелета нужна  дозавтравка!!!" << endl;
			minFuel = fuel - (distance1 * 7);
			cout << "Минимальная дозаправка - " << (distance2 * 7) - minFuel << endl;
		}
		else
			cout << "Дозаправка не нужна " << endl;
	}
	if (masa < 2000 && masa >= 1500) {

		test = fuel - (distance1 * 9) - (distance2 * 9);

		if (distance1 * 9 > fuel || distance2 * 9 > fuel) {
			cout << "Слишком большое растояние" << endl;
		}
		else if (test < 0 && test <= distance2) {
			cout << "Расход топлива на 1км-> " << 9 << "литров" << endl;
			cout << "Потрачено топлива от точки А до Б: " << distance1 * 9 << endl;
			cout << "Для перелета нужна  дозавтравка!!!" << endl;
			minFuel = fuel - (distance1 * 9);
			cout << "Минимальная дозаправка - " << (distance2 * 9) - minFuel << endl;
		}
		else
			cout << "Дозаправка не нужна " << endl;
	}
	else if (masa < 0 || masa >= 2000) {
		cout << "Критическая маса" << endl;
	}*/





	const int baseZp = 200;

	int totalZp;
	int m1, m2, m3;
	int perc;


	cout << "\tВведите уровень продаж менеджеров: " << endl;
	cout << "1.";
	cin >> m1;
	cout << "2.";
	cin >> m2;
	cout << "3.";
	cin >> m3;


	if (m1 < 500) {
		cout << "Процент менеджера №1 - " << 3 << " % " << endl;
		perc = (baseZp / 100) * 3;
		totalZp = baseZp + perc;

		cout << "Зарплата за месяц - " << totalZp << " $ " << endl;
	}
	if (m1 >= 500 && m1 < 1000) {
		cout << "Процент менеджера №1 - " << 5 << " % " << endl;
		perc = (baseZp / 100) * 5;
		totalZp = baseZp + perc;

		cout << "Зарплата за месяц - " << totalZp << " $ " << endl;
	}
	if (m1 >= 1000) {
		cout << "Процент менеджера №1 - " << 8 << " % " << endl;
		perc = (baseZp / 100) * 8;
		totalZp = baseZp + perc;

		cout << "Зарплата за месяц - " << totalZp << " $ " << endl;
	}
	cout << endl;



	if (m2 < 500) {
		cout << "Процент менеджера №2 - " << 3 << " % " << endl;
		perc = (baseZp / 100) * 3;
		totalZp = baseZp + perc;

		cout << "Зарплата за месяц - " << totalZp << " $ " << endl;
	}
	if (m2 >= 500 && m2 < 1000) {
		cout << "Процент менеджера №2 - " << 5 << " % " << endl;
		perc = (baseZp / 100) * 5;
		totalZp = baseZp + perc;

		cout << "Зарплата за месяц - " << totalZp << " $ " << endl;
	}
	if (m2 >= 1000) {
		cout << "Процент менеджера №2 - " << 8 << " % " << endl;
		perc = (baseZp / 100) * 8;
		totalZp = baseZp + perc;
		cout << "Зарплата за месяц - " << totalZp << " $ " << endl;
	}
	cout << endl;


	if (m3 < 500) {
		cout << "Процент менеджера №3 - " << 3 << " % " << endl;
		perc = (baseZp / 100) * 3;
		totalZp = baseZp + perc;
		cout << "Зарплата за месяц  - " << totalZp << " $ " << endl;
	}
	if (m3 >= 500 && m3 < 1000) {
		cout << "Процент менеджера №3 - " << 5 << " % " << endl;
		perc = (baseZp / 100) * 5;
		totalZp = baseZp + perc;
		cout << "Зарплата за месяц - " << totalZp << " $ " << endl;
	}
	if (m3 >= 1000) {
		cout << "Процент менеджера №3 - " << 8 << " % " << endl;
		perc = (baseZp / 100) * 8;
		totalZp = baseZp + perc;
		cout << "Зарплата за месяц  - " << totalZp << " $ " << endl;

	}

	cout << endl;

	if (m2 < m1 && m1 > m3) {
		cout << "Менеджер №1 - получает премию" << endl;
		m1 = totalZp;
		cout << totalZp + 200 << "-" << "заплата с премией" << endl;
	}
	else if (m1 < m2 && m2 > m3) {
		cout << "Менеджер №2 - получает премию" << endl;
		m2 = totalZp;
		cout << totalZp + 200 << "-" << "заплата с премией" << endl;

	}
	else {
		cout << "Менеджер №3 - получает премию" << endl;
		m3 = totalZp;
		cout << totalZp + 200 << "-" << "заплата с премией" << endl;

	}

	system("pause");
	return 0;
}


