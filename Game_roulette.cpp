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
		for (short loading = 0; loading < 15; loading++) {				
			cout << "Ваш номер: " << no << endl;
			Sleep(times);
			cout << "Прокрутка... " << loading;
			system("cls");		
		}

		randNo = rand() % 15 + 0;

		if (no == randNo) {
			cout << "Победа!" << endl;
		} else if (no == 0) {
			cout << "Победа!" << endl;
		} else {
			cout << "Проигрыш!" << endl << "Выйгрышный номер был: " << randNo;
		}
	}