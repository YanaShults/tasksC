//Шаблон T в C++ — это универсальный тип, 
//который ты можешь использовать вместо конкретного 
//типа данных(int, float, string, и т.д.), 
//чтобы написать один универсальный код, работающий с разными типами данных.
//template <typename T>
//void print(T value) {
//	cout << value << endl;
//}
//Эта функция print может принимать любой тип : int, float, char, string и т.д.
//print(5);          // int
//print(3.14);       // double
//print("hello");    // const char*
//print(string("hi"));// std::string


//Используя шаблоны классов написать программу 
//сортировки массива любого(числового) типа 
//и вывести на результат на экран.
//Можно использовать любой алгоритм сортировки.


#include <iostream>
using namespace std;

template <typename T>
class SortArr {
public: 
	void sortArr(T* arr, int size) {
		for (int i = 0; i < size - 1;i++) {
			for (int j = 0;j < size - i - 1;j++) {
				if (arr[j] > arr[j + 1]) {
					T n = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = n;
				}
			}
		}
	}

	void print(T* arr, int size) {
		for (int i = 0;i < size;i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
};

//int main() {
//	const int size = 5;
//	int numbers[size] = { 4, 5, 1, 3, 2 };
//
//	SortArr<int> s;
//	cout << "Array: ";
//	s.print(numbers, size);
//	cout << endl;
//
//	cout << "New array: ";
//	s.sortArr(numbers, size);
//	s.print(numbers, size);
//	cout << endl << endl;
//
//	const int fsize = 5;
//	float fnumbers[fsize] = { 4.5, 3.5, 7.1, 8.3, 1.2 };
//
//	SortArr<float> k;
//	cout << "Array: ";
//	k.print(fnumbers, fsize);
//	cout << endl;
//
//	cout << "New array: ";
//	k.sortArr(fnumbers, fsize);
//	k.print(fnumbers, fsize);
//	cout << endl;
//
//}
//
