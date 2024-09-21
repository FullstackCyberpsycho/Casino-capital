#include "Game_Blackjack.h"
#include "Game_Guess the number.h"
#include "Game_roulette.h"

int main() {
	setlocale(LC_ALL, "Rus");
	Blackjack blackjack;
	GuesStheNumber guesStheNumber;
	Roulette roulette;

	char choise;
	cout << "beta-version 3.26.03.25" << endl << "Main menu!" << endl
		<< "1 - Баланс..." << endl << "2 - все игры" << endl << "3 - Выйти" 
		<< endl << "Ввод: ";
	cin >> choise;

	if (choise == '1') {
		system("cls");
		cout << "пока нет! (Балланс позже будет добавлен)" << endl;
	} else if(choise == '2') {
		system("cls");
		cout << "1 - Blackjack" << endl << "2 - guess the number" << endl <<
			"3 - roulette" << endl << "4 - poker" << endl << "5 - Выход" 
			<< endl << "Ввод: ";
		cin >> choise;

		switch (choise) {
		case '1':
			system("cls");			
			try {
				blackjack.game();
			}
			catch (const exception& erMsg) {
				cerr << erMsg.what() << endl;
			}
			break;
		case '2':
			system("cls");
			/*code guess the number*/
			try {
				guesStheNumber.game();
			} catch (const exception& erMsg) {
				cerr << erMsg.what() << endl;
			}
			break;
		case '3':
			system("cls");
			/*code roulette*/
			try {
				roulette.game();
			} catch (const exception& erMsg) {
				cerr << erMsg.what() << endl;
			}
			break;
		case '4':
			system("cls");
			/*code porer*/
			break;
		case '5':
			system("cls");
			cout << "Вы вышли в главное меню" << endl;  
			break;
		default:
			system("cls");
			cout << "Error-404!" << endl;
			break;
		}

	} else if(choise == '3') {
		system("cls");
		cout << "Вы вышли из игры!";
		return -1;
	}

	return 0;
}