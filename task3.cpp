//Создать простейшую программу - переводчик “англо - русский словарь”.
//Для решения задачи необходимо использовать контейнер map, 
//где русское слово - ключ, а его его значение - английский перевод.
//Кроме того, решение необходимо  оформить в функции translateToEnglish, translateToRussian.
//Пользователь вводит с клавиатуры слово, а программа выводит на экран перевод.
//Перевод осуществляется как с русского на английский, так и с английского на русский. 
//(можно любую другую комбинацию языков, если не хочется заморачиваться с кодировкой, 
//например англо - испанский словарь).

//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//void translateToEnglish(const map<string, string>& dict) {
//	string word;
//	cout << "Enter russian word: ";
//	cin >> word;
//
//	auto i = dict.find(word);
//
//	if (i != dict.end()) {
//		cout << "English translation: " << i->second << endl;
//	}
//	else {
//		cout << "The word wasn't found in dictionary.\n";
//	}
//}
//
//void translateToRussian(const map<string, string>& dict) {
//	string word;
//	cout << "Enter english word: ";
//	cin >> word;
//
//	bool i = false;
//
//	for (const auto& el : dict) {
//		if (el.second == word) {
//			cout << "Russian translation: " << el.first << endl;
//			i = true;
//			break;
//		}
//	}
//
//	if (!i) {
//		cout << "The word wasn't found in dictionary.\n";
//	}
//}
//
//int main() {
//	map<string, string> dictionary = {
//		{"яблоко", "apple"},
//		{"книга", "book"}
//	};
//
//	int choice;
//	do {
//		cout << "1) Translate word from Russian to English.\n";
//		cout << "2) Translate word from English to Russian.\n";
//		cout << "3) Exit.\n";
//		cin >> choice;
//
//		switch (choice) {
//			case 1:
//				translateToEnglish(dictionary);
//				break;
//			case 2:
//				translateToRussian(dictionary);
//				break;
//			case 3:
//				cout << "See you soon.";
//				break;
//			default:
//				cout << "Wrong number.";
//				break;
//		}
//	} while (choice != 3);
//
//	return 0;
//}

