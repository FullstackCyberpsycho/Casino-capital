#include "Game_Guess the number.h"

void GuesStheNumber::game() {
	while (true) {
		srand(time(0));
		cout << " ====== ������� ���������� �������!======" << endl
			<< "1. �������� ����� �� 1 �� 10" << endl
			<< "2. ���������� �������� �����, � 10 ��� ����������� ����� ������"
			<< endl << "3. ������������ ������, � �� ������� �����, ������� ���������"
			<< endl << "��� ������: $" << balance << endl << "������� ����� ����� ������: $";
		/*if (resBalance == balance) {
			cout << endl << "��� ������: $" << balance << endl << "������� ����� ����� ������: $";
		} else if (resBalance != balance) {
			cout << endl << "��� ������: $" << resBalance << endl << "������� ����� ����� ������: $";
		}*/

		cin >> rate;

		if (rate > balance) {
			throw exception("������! �� �� ������ ���� ������ ����� ��� � ��� �� �������");
		}

		
		randNum = rand() % 10 + 1;
		cout << randNum << endl;

		cout << "������� ���� �����: ";
		cin >> num;

		//randNum = rand() % 10 + 1;			

		if (num == randNum) {
			system("cls");
			rate * 10;
			resBalance = balance + rate;

			cout << "���������� �� ��������!" << endl << "+$" << rate
				<< endl << "��� ������� �������: " << resBalance << endl;
		}
		else {
			system("cls");
			resBalance = balance - rate;
			cout << "�� ���������!" << "-$" << rate << endl
				<< "��� ������� �������: " << resBalance << endl
				<< "��������� ����� ����: " << randNum << endl;
		}

		cout << "����� ����� ������� '1': ";
		cin >> choise;
		if (choise == '1') {
			system("cls");
			break;
		}
		system("cls");
	}
}	