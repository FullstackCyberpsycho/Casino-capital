#include "Game_Guess the number.h"

void GuesStheNumber::game() {
	while (true) {
		srand(time(0));
		cout << " ====== ПРАВИЛА УГАДЫВАНИЯ НОМЕРОВ!======" << endl
			<< "1. Выберите число от 1 до 10" << endl
			<< "2. Победитель получает сумму, в 10 раз превышающую сумму ставки"
			<< endl << "3. Неправильная ставка, и вы теряете сумму, которую поставили"
			<< endl << "Ваш баланс: $" << balance << endl << "Введите сумму вашей ставки: $";
		/*if (resBalance == balance) {
			cout << endl << "Ваш баланс: $" << balance << endl << "Введите сумму вашей ставки: $";
		} else if (resBalance != balance) {
			cout << endl << "Ваш баланс: $" << resBalance << endl << "Введите сумму вашей ставки: $";
		}*/

		cin >> rate;

		if (rate > balance) {
			throw exception("Ошибка! Вы не можете снят больше денег чем у вас на балансе");
		}

		
		randNum = rand() % 10 + 1;
		cout << randNum << endl;

		cout << "Введите ваше число: ";
		cin >> num;

		//randNum = rand() % 10 + 1;			

		if (num == randNum) {
			system("cls");
			rate * 10;
			resBalance = balance + rate;

			cout << "Поздравляю вы выиграли!" << endl << "+$" << rate
				<< endl << "Ваш текущий балланс: " << resBalance << endl;
		}
		else {
			system("cls");
			resBalance = balance - rate;
			cout << "Вы проиграли!" << "-$" << rate << endl
				<< "Ваш текущий балланс: " << resBalance << endl
				<< "Загаданое число было: " << randNum << endl;
		}

		cout << "чтобы выйти введите '1': ";
		cin >> choise;
		if (choise == '1') {
			system("cls");
			break;
		}
		system("cls");
	}
}	