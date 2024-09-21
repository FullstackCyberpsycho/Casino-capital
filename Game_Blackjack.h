#pragma once
#include <iostream>
#include <ctime>
#include <vector>
#include <numeric>
using namespace std;

class Blackjack {
private:
	int balance = 100, rate, resRate;
	int score = 0, scoreCroupier = 0;
	char choice;
	int resScore, resScoreCroupier;
	vector<int>allScore;
	vector<int>allScoreCroupier;

public:
	void menu();

	void game();
};