#pragma once

#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

class Roulette {
private:
	int balance = 100, rate;
	short no, randNo, times = 1000;

public:
	void game(); //{
		/*srand(time(0));

		cout << "������ ������ ������ �� �����!" << endl
			<< "������� ��� �����(1-15): ";
		cin >> no;

		if (no > 15 && no <= 0) {
			throw exception("Error! you enter: ", no);
		}

		cout << "��� ������: " << balance << endl << "������� ����� ������: ";
		cin >> rate;

		if (rate > balance) {
			throw exception("������! �� �� ������ ���� ������ ����� ��� � ��� �� �������");
		}
		system("cls");

		for (short i = 0; i < 15; i++) {
			cout << "��� �����: " << no << endl;
			Sleep(times);
			cout << "���������... " << i;
			system("cls");
		}

		randNo = rand() % 15 + 0;

		if (no == randNo) {
			cout << "������!" << endl;
		}
		else if (no == 0) {
			cout << "������!" << endl;
		}
		else {
			cout << "��������!" << endl << "���������� ����� ���: " << randNo;
		}*/
	//}
};