#include "Game_Blackjack.h"

void Blackjack::menu() {
	cout << "1 - ����� ������ ����!" << endl
		<< "2 - ����� �����!" << endl
		<< "����: ";
	cin >> choice;
}

void Blackjack::game() {
	Blackjack::menu();

	srand(time(0));
	allScore.push_back(0);
	allScoreCroupier.push_back(0);

	system("cls");
	if (choice == '1') {
		cout << "��� ������: $" << balance << endl
			<< "������� ����� ����� ������: $";
		cin >> rate;

		if (rate > balance) {
			throw exception("������! �� �� ������ ���� ������ ����� ��� � ��� �� �������");
		}
		system("cls");

		while (true) {
			allScoreCroupier.push_back(scoreCroupier);
			allScore.push_back(score);

			resScore = accumulate(allScore.begin(), allScore.end(), 0);
			resScoreCroupier = accumulate(allScoreCroupier.begin()
				, allScoreCroupier.end(), 0);

			cout << "���� ������: $" << rate << endl << "��� ������: "
				<< score << endl << "��� ����: " << resScore << "/���� ������: "
				<< resScoreCroupier << endl << "1 - ����� �����" << endl
				<< "2 - ������" << endl << endl;

			if (resScore > 21) {
				system("cls");
				cout << "�� ���������! ��� ����: " << resScore << endl
					<< "���� ������: " << resScoreCroupier << endl;
				resRate = balance - rate;
				cout << "��� ������: $" << resRate;
				balance = resRate;
				break;

			} else if (resScore == 21) {
				system("cls");
				cout << "�� ��������! ��� ����: " << resScore << endl
					<< "���� ������: " << resScoreCroupier << endl;
				resRate = balance * rate;
				cout << "��� ������: $" << resRate;
				balance = resRate;

				break;

			} else if (resScoreCroupier > 21) {
				system("cls");
				cout << "�� ��������! ��� ����: " << resScore << endl
					<< "���� ������: " << resScoreCroupier << endl;
				resRate = balance + rate;
				cout << "��� ������: $" << resRate;
				balance = resRate;

				break;
			}

			cout << "����: ";
			cin >> choice;
			if (choice == '2') {
				system("cls");

				cout << "�� ��������� ����: " << endl;
				if (resScore > resScoreCroupier) {
					cout << "�� ��������! ��� ����: " << resScore << endl
						<< "���� ������: " << resScoreCroupier << endl;
					resRate = balance + rate;
					cout << "��� ������: $" << resRate;

				} else if (resScore == 21) {
					cout << "�� ��������! ��� ����: " << resScore << endl
						<< "���� ������: " << resScoreCroupier << endl;
					resRate = balance * rate;
					cout << "��� ������: $" << resRate;

				} else if (resScoreCroupier > resScore) {
					system("cls");
					cout << "�� ���������! ��� ����: " << resScore << endl
						<< "���� ������: " << resScoreCroupier << endl;
					resRate = balance - rate;
					cout << "��� ������: $" << resRate;
				}
				break;
			}

			system("cls");
			scoreCroupier = rand() % 11 + 2;
			score = rand() % 11 + 2;
		}		
	} else {
		system("cls");
		cout << "�� �������� ����!" << endl;
	}
};