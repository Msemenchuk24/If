#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	/*int a1, a2, a3, a4, a5, a6;

	int num;

	cout << "����i�� ����������� �����" << endl;
	cin >> num;

	a1 = num / 100000;
	a2 = num / 10000 % 10;
	a3 = num / 1000 % 10;
	a4 = num / 100 % 10;
	a5 = num / 10 % 10;
	a6 = num % 10;



	if (a1+a2+a3 == a4+a5+a6 ) {

		cout << "��� ���������: )" << endl;
	}
	else {
		cout << "����� �� � ��������" << endl;
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

	cout << "��������� ����� A and B: ";
	cin >> distance1;

	cout << "��������� ����� B and C: ";
	cin >> distance2;

	cout << "���� �����: ";
	cin >> masa;


	if (masa < 500) {

		test = fuel - (distance1 * 1) - distance2;

		if (distance1 > fuel || distance2 > fuel) {
			cout << "������� ������� ���������" << endl;
		}
		else if (test < 0 && test <= distance2) {
			cout << "\n������ ������� �� 1�� -> " << 1 << "����" << endl;
			cout << "��������� ������� �� ����� � �� �: " << distance1 << endl;
			cout << "��� �������� �����  �����������!!!" << endl;
			minFuel = fuel - distance1;
			cout << "����������� ���������� - " << distance2 - minFuel << endl;
		}
		else
			cout << "���������� �� ����� " << endl;

	}
	if (masa < 1000 && masa >= 500) {

		test = fuel - (distance1 * 4) - (distance2 * 4);

		if (distance1 * 4 > fuel || distance2 * 4 > fuel) {
			cout << "������� ������� ���������" << endl;
		}
		else if(test < 0 && test <= distance2) {
			cout << "������ ������� �� 1�� -> " << 4 << "�����" << endl;
			cout << "��������� ������� �� ����� � �� �: " << distance1 * 4 << endl;
			cout << "��� �������� �����  �����������!!!" << endl;
			minFuel = fuel - (distance1 * 4);
			cout << "����������� ���������� - " << (distance2 * 4) - minFuel << endl;
		}
		else
			cout << "���������� �� ����� " << endl;

	}
	if (masa < 1500 && masa >= 1000) {

		test = fuel - (distance1 * 7) - (distance2 * 7);

		if (distance1 * 7 > fuel || distance2 * 7 > fuel) {
			cout << "������� ������� ���������" << endl;
		}
		else if (test < 0 && test <= distance2) {
			cout << "������ ������� �� 1��-> " << 7 << "������" << endl;
			cout << "��������� ������� �� ����� � �� �: " << distance1 * 7 << endl;
			cout << "��� �������� �����  �����������!!!" << endl;
			minFuel = fuel - (distance1 * 7);
			cout << "����������� ���������� - " << (distance2 * 7) - minFuel << endl;
		}
		else
			cout << "���������� �� ����� " << endl;
	}
	if (masa < 2000 && masa >= 1500) {

		test = fuel - (distance1 * 9) - (distance2 * 9);

		if (distance1 * 9 > fuel || distance2 * 9 > fuel) {
			cout << "������� ������� ���������" << endl;
		}
		else if (test < 0 && test <= distance2) {
			cout << "������ ������� �� 1��-> " << 9 << "������" << endl;
			cout << "��������� ������� �� ����� � �� �: " << distance1 * 9 << endl;
			cout << "��� �������� �����  �����������!!!" << endl;
			minFuel = fuel - (distance1 * 9);
			cout << "����������� ���������� - " << (distance2 * 9) - minFuel << endl;
		}
		else
			cout << "���������� �� ����� " << endl;
	}
	else if (masa < 0 || masa >= 2000) {
		cout << "����������� ����" << endl;
	}*/





	const int baseZp = 200;

	int totalZp;
	int m1, m2, m3;
	int perc;


	cout << "\t������� ������� ������ ����������: " << endl;
	cout << "1.";
	cin >> m1;
	cout << "2.";
	cin >> m2;
	cout << "3.";
	cin >> m3;


	if (m1 < 500) {
		cout << "������� ��������� �1 - " << 3 << " % " << endl;
		perc = (baseZp / 100) * 3;
		totalZp = baseZp + perc;

		cout << "�������� �� ����� - " << totalZp << " $ " << endl;
	}
	if (m1 >= 500 && m1 < 1000) {
		cout << "������� ��������� �1 - " << 5 << " % " << endl;
		perc = (baseZp / 100) * 5;
		totalZp = baseZp + perc;

		cout << "�������� �� ����� - " << totalZp << " $ " << endl;
	}
	if (m1 >= 1000) {
		cout << "������� ��������� �1 - " << 8 << " % " << endl;
		perc = (baseZp / 100) * 8;
		totalZp = baseZp + perc;

		cout << "�������� �� ����� - " << totalZp << " $ " << endl;
	}
	cout << endl;



	if (m2 < 500) {
		cout << "������� ��������� �2 - " << 3 << " % " << endl;
		perc = (baseZp / 100) * 3;
		totalZp = baseZp + perc;

		cout << "�������� �� ����� - " << totalZp << " $ " << endl;
	}
	if (m2 >= 500 && m2 < 1000) {
		cout << "������� ��������� �2 - " << 5 << " % " << endl;
		perc = (baseZp / 100) * 5;
		totalZp = baseZp + perc;

		cout << "�������� �� ����� - " << totalZp << " $ " << endl;
	}
	if (m2 >= 1000) {
		cout << "������� ��������� �2 - " << 8 << " % " << endl;
		perc = (baseZp / 100) * 8;
		totalZp = baseZp + perc;
		cout << "�������� �� ����� - " << totalZp << " $ " << endl;
	}
	cout << endl;


	if (m3 < 500) {
		cout << "������� ��������� �3 - " << 3 << " % " << endl;
		perc = (baseZp / 100) * 3;
		totalZp = baseZp + perc;
		cout << "�������� �� �����  - " << totalZp << " $ " << endl;
	}
	if (m3 >= 500 && m3 < 1000) {
		cout << "������� ��������� �3 - " << 5 << " % " << endl;
		perc = (baseZp / 100) * 5;
		totalZp = baseZp + perc;
		cout << "�������� �� ����� - " << totalZp << " $ " << endl;
	}
	if (m3 >= 1000) {
		cout << "������� ��������� �3 - " << 8 << " % " << endl;
		perc = (baseZp / 100) * 8;
		totalZp = baseZp + perc;
		cout << "�������� �� �����  - " << totalZp << " $ " << endl;

	}

	cout << endl;

	if (m2 < m1 && m1 > m3) {
		cout << "�������� �1 - �������� ������" << endl;
		m1 = totalZp;
		cout << totalZp + 200 << "-" << "������� � �������" << endl;
	}
	else if (m1 < m2 && m2 > m3) {
		cout << "�������� �2 - �������� ������" << endl;
		m2 = totalZp;
		cout << totalZp + 200 << "-" << "������� � �������" << endl;

	}
	else {
		cout << "�������� �3 - �������� ������" << endl;
		m3 = totalZp;
		cout << totalZp + 200 << "-" << "������� � �������" << endl;

	}

	system("pause");
	return 0;
}


