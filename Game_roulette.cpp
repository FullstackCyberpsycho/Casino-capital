//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
#include "Game_roulette.h"

//class Roulette {
//private:
//	int balance = 100, rate;
//	short no, randNo, times = 1000;
//
//public:
	void Roulette::game() {
		srand(time(0));

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
		for (short loading = 0; loading < 15; loading++) {				
			cout << "��� �����: " << no << endl;
			Sleep(times);
			cout << "���������... " << loading;
			system("cls");		
		}

		randNo = rand() % 15 + 0;

		if (no == randNo) {
			cout << "������!" << endl;
		} else if (no == 0) {
			cout << "������!" << endl;
		} else {
			cout << "��������!" << endl << "���������� ����� ���: " << randNo;
		}
	}