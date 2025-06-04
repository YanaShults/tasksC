//Создать программу учета товаров на складе.
//Необходимо создать динамический массив(не вектор!),
//в котором будут храниться данные о товарах.
//Реализовать возможности добавления, 
//удаления элемента и просмотра всего массива.
//Оформить в консольное меню

#include <iostream>
#include <string>

using namespace std;

struct Product {
	string name;
	int price;
	int amount;
};

void show(Product* p, int size) {
	if (size == 0) {
		cout << "Empty.\n";
	}
	else {
		for (int i = 0;i < size; i++) {
			cout << i + 1 << ") " << "Name: " << p[i].name << " Price: " << p[i].price << " Amount: " << p[i].amount << endl;
		}
	}
	cout << "\n\n\n";
}

void addProduct(Product*& p, int& size) {
	Product new_p;
	cout << "Enter product name: ";
	cin >> new_p.name;

	cout << "Enter product price: ";
	cin >> new_p.price;

	cout << "Enter product amount: ";
	cin >> new_p.amount;

	Product* newProducts = new Product[size + 1];

	for (int i = 0;i < size;i++) {
		newProducts[i] = p[i];
	}

	newProducts[size] = new_p;

	delete[] p;
	p = newProducts;
	size++;

	cout << "The product has been added.\n";
}

void deleteProduct(Product*& p, int& size) {
	if (size == 0) {
		cout << "Empty.\n";
		return;
	}
	int index;
	cout << "Enter index: ";
	cin >> index;

	if (index < 1 || index >= size) {
		cout << "Index error.\n";
		return;
	}

	Product* newProducts = new Product[size - 1];

	for (int i = 0, j= 0; i < size;i++) {
		if (i != index) {
			newProducts[j++] = p[i];
		}
	}

	delete[] p;
	p = newProducts;
	size--;

	cout << "The product has been deleted.\n";
	
}

//int main() {
//	Product* products = nullptr;
//	int size = 0;
//	int choice;
//
//	do {
//		cout << "1) Show all products.\n2) Add product.\n3) Delete product.\n4) Exit.\n";
//		cin >> choice;
//
//		switch (choice) {
//		case 1:
//			show(products, size);
//			break;
//		case 2:
//			addProduct(products, size);
//			break;
//		case 3:
//			deleteProduct(products, size);
//			break;
//		case 4:
//			cout << "See you soon.";
//			break;
//		default:
//			cout << "Wrong number.\n";
//			break;
//		}
//	} while (choice != 4);
//
//	delete[] products;
//	return 0;
//}