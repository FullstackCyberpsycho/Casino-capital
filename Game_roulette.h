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

		cout << "Игроки делают ставки на числа!" << endl
			<< "Введите ваш номер(1-15): ";
		cin >> no;

		if (no > 15 && no <= 0) {
			throw exception("Error! you enter: ", no);
		}

		cout << "Ваш баланс: " << balance << endl << "Введите сумму ставки: ";
		cin >> rate;

		if (rate > balance) {
			throw exception("Ошибка! Вы не можете снят больше денег чем у вас на балансе");
		}
		system("cls");

		for (short i = 0; i < 15; i++) {
			cout << "Ваш номер: " << no << endl;
			Sleep(times);
			cout << "Прокрутка... " << i;
			system("cls");
		}

		randNo = rand() % 15 + 0;

		if (no == randNo) {
			cout << "Победа!" << endl;
		}
		else if (no == 0) {
			cout << "Победа!" << endl;
		}
		else {
			cout << "Проигрыш!" << endl << "Выйгрышный номер был: " << randNo;
		}*/
	//}
};