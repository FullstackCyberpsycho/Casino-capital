#include "Game_Blackjack.h"

void Blackjack::menu() {
	cout << "1 - чтобы начать игру!" << endl
		<< "2 - чтобы выйти!" << endl
		<< "Ввод: ";
	cin >> choice;
}

void Blackjack::game() {
	Blackjack::menu();

	srand(time(0));
	allScore.push_back(0);
	allScoreCroupier.push_back(0);

	system("cls");
	if (choice == '1') {
		cout << "Ваш быланс: $" << balance << endl
			<< "Введите сумму вашей ставки: $";
		cin >> rate;

		if (rate > balance) {
			throw exception("Ошибка! Вы не можете снят больше денег чем у вас на балансе");
		}
		system("cls");

		while (true) {
			allScoreCroupier.push_back(scoreCroupier);
			allScore.push_back(score);

			resScore = accumulate(allScore.begin(), allScore.end(), 0);
			resScoreCroupier = accumulate(allScoreCroupier.begin()
				, allScoreCroupier.end(), 0);

			cout << "Ваша ставка: $" << rate << endl << "Вам выпало: "
				<< score << endl << "Ваш балл: " << resScore << "/Балл крупье: "
				<< resScoreCroupier << endl << "1 - Взять карту" << endl
				<< "2 - Хватит" << endl << endl;

			if (resScore > 21) {
				system("cls");
				cout << "Вы проиграли! ваш балл: " << resScore << endl
					<< "Балл крупье: " << resScoreCroupier << endl;
				resRate = balance - rate;
				cout << "Ваш баланс: $" << resRate;
				balance = resRate;
				break;

			} else if (resScore == 21) {
				system("cls");
				cout << "Вы выиграли! ваш балл: " << resScore << endl
					<< "Балл крупье: " << resScoreCroupier << endl;
				resRate = balance * rate;
				cout << "Ваш баланс: $" << resRate;
				balance = resRate;

				break;

			} else if (resScoreCroupier > 21) {
				system("cls");
				cout << "Вы выиграли! ваш балл: " << resScore << endl
					<< "Балл крупье: " << resScoreCroupier << endl;
				resRate = balance + rate;
				cout << "Ваш баланс: $" << resRate;
				balance = resRate;

				break;
			}

			cout << "Ввод: ";
			cin >> choice;
			if (choice == '2') {
				system("cls");

				cout << "Вы закончили игру: " << endl;
				if (resScore > resScoreCroupier) {
					cout << "Вы выиграли! ваш балл: " << resScore << endl
						<< "Балл крупье: " << resScoreCroupier << endl;
					resRate = balance + rate;
					cout << "Ваш баланс: $" << resRate;

				} else if (resScore == 21) {
					cout << "Вы выиграли! ваш балл: " << resScore << endl
						<< "Балл крупье: " << resScoreCroupier << endl;
					resRate = balance * rate;
					cout << "Ваш баланс: $" << resRate;

				} else if (resScoreCroupier > resScore) {
					system("cls");
					cout << "Вы проиграли! ваш балл: " << resScore << endl
						<< "Балл крупье: " << resScoreCroupier << endl;
					resRate = balance - rate;
					cout << "Ваш баланс: $" << resRate;
				}
				break;
			}

			system("cls");
			scoreCroupier = rand() % 11 + 2;
			score = rand() % 11 + 2;
		}		
	} else {
		system("cls");
		cout << "Вы покинули игру!" << endl;
	}
};