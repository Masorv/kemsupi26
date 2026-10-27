/******************************************
 * Автор: Мыльников Александр             *
 * Название: Строки, векторы и словари    *
 * Вариант: 17                            *
 *****************************************/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void partA();
void partB();
void partC();
void partD();

int main() {
	cout << "Part A:\n";
	partA();

	cout << "\nPart B:\n";
	partB();

	cout << "\nPart C:\n";
	partC();

	cout << "\nPart D:\n";
	partD();

	return 0;
}

void partA() {
	string input, word;

	cout << "Input a string: ";
	getline(cin, input);
	input += ' ';

	for (char& letter : input) {
		if (letter != ' ') {
			word += letter;
		}
		else {
			string invertedWord = "";

			for (int letterIndex = word.size() - 1; letterIndex >= 0; --letterIndex) {
				invertedWord += word[letterIndex];
			}

			cout << invertedWord << ' ';

			word = "";
		}
	}
}

void partB() {
	int n, l, r;

	cout << "Input count of vector's elements: ";
	cin >> n;

	if (n <= 0) {
		cout << "Invalid";
		return;
	}

	cout << "Input start of the segment: ";
	cin >> l;

	cout << "Input end of the segment: ";
	cin >> r;

	if (l <= 0 || r <= 0 || r < l) {
		cout << "Invalid";
		return;
	}

	vector <int> numbersVector(n);

	cout << "Input vector: ";

	for (int numberIndex = 0; numberIndex < n; ++numberIndex) {
		cin >> numbersVector[numberIndex];
	}

	for (int numberIndex = l - 1; numberIndex < r; ++numberIndex) {
		cout << numbersVector[numberIndex] << ' ';
	}
}

void partC() {
	int pairsCount;
	map <string, int> pairs;

	cout << "Input number of pairs: ";
	cin >> pairsCount;

	for (int pairsIndex = 0; pairsIndex < pairsCount; ++pairsIndex) {
		int number;
		string name;

		cout << "Input pair: "; cin >> name >> number;

		pairs[name] = number;
	}

	string key;

	cout << "Input key: ";
	cin >> key;

	if (pairs.find(key) != pairs.end()) {
		cout << pairs.find(key)->second;
	} else {
		cout << "Invalid";
	}
}

void partD() {
	int seatsCount;
	map <int, vector<int>> grouped;

	cout << "Input number of seats: ";
	cin >> seatsCount;

	for (int seatIndex = 0; seatIndex < seatsCount; ++seatIndex) {
		int row, column;

		cout << "Input row and seat: "; cin >> row >> column;

		bool existanceSeat = false;

		for (int& existingSeat : grouped[row]) {
			if (existingSeat == column) {
				existanceSeat = true;
				break;
			}
		}

		if (!existanceSeat) {
			grouped[row].push_back(column);
		}
	}

	for (auto& seat : grouped) {
		sort(seat.second.begin(), seat.second.end());
		for (int& place : seat.second) {
			printf("%d-%d\n", seat.first, place);
		}
	}
}