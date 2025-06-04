//Напиши программу, которая запрашивает число от 1 до 365. 
//Число является номером дня, начиная с 1 января 2022 года.
// (1 января 2022 года суббота)
//Необходимо вывести на экран какой это день недели.
//Пример: Число 50 - суббота. (если сверить на календаре это 19 февраля)

//#include <iostream>
//using namespace std;
//
//int main() {
//	int number;
//	cout << "Enter number from 1 to 365: ";
//	cin >> number;
//
//	if (number < 1 || number > 365) {
//		cout << "Error\n";
//		return 1;
//	}
//
//	int index = (number - 1) % 7;
//	string days[7] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
//
//	cout << "Number " << number << " is " << days[index] << endl;
//
//	return 0;
//
//}