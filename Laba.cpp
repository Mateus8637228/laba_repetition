/****************************
* Автор: Дорошкевич Матвей *
* Название: Вариант 5      *
***************************/
#include <iostream>
#include <fstream>
#include <map>
#include <cctype>
using namespace std;

int main() {
  ifstream inputFile("Laba.txt");
  if (!inputFile.is_open()) {
    cout << "Файл открыт с ошибкой Laba.txt" << endl;
    return 1;
  }

  map<char, int> characterFrequency;
  char currentChar;

  while (inputFile.get(currentChar)) {
    if (isalpha(static_cast<unsigned char>(currentChar))) {
        currentChar = static_cast<char>(tolower(static_cast<unsigned char>(currentChar)));
        ++characterFrequency[currentChar];
    }
  }

  inputFile.close();

  cout << "Частота повторений:" << "\n";
  for (auto &characterPair : characterFrequency) {
    cout << characterPair.first << ": " << characterPair.second << '\n';
  }

  return 0;
}
