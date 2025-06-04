//Используя полиморфизм рассчитать площади 
//трех геометрических фигур(круга, треугольника, прямоугольника), 
//вывести на экран названия этих фигур и формулу расчета площади.

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
	virtual void info() = 0;
	virtual double area() = 0;
};

class Circle : public Shape {
	double r;
public:
	Circle(double radius) { r = radius; }

	void info() override {
		cout << "Circle\nS = Pi * r^2\n";
	}

	double area() override {
		return 3.14 * r * r;
	}
};

class Rectangle : public Shape {
	double a, b;
public:
	Rectangle(double width, double height) {
		a = width;
		b = height;
	}

	void info() override {
		cout << "Rectangle\nS = width * height\n";
	}

	double area() override {
		return a * b;
	}
};

class Triangle : public Shape {
	double h, a;
public:
	Triangle(double height, double side) {
		h = height;
		a = side;
	}

	void info() override {
		cout << "Triangle\nS = height * side * 0.5\n";
	}

	double area() override {
		return h * a * 0.5;
	}
};

int main() {
	Circle c = Circle(5.4);
	c.info();
	double res = c.area();
	cout << "Area = " << res << endl << endl;

	Rectangle r = Rectangle(4.3, 3.7);
	r.info();
	double resr = r.area();
	cout << "Area = " << resr << endl << endl;

	Triangle t = Triangle(4.3, 3.7);
	t.info();
	double rest = t.area();
	cout << "Area = " << rest << endl << endl;
}