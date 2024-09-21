#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class GuesStheNumber {
private:
	char choise;
	int balance = 100, resBalance, rate;
	int randNum, num;

public:
	void game();
};