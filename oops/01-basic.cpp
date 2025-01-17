#include <bits/stdc++.h>
using namespace std;

class Animal {
private:
	string name;
	int legs;

public:
	Animal() {
		name = "default";
		legs = 0;
	}

	Animal(string name, int legs) {
		this->name = string(name);
		this->legs = legs;
	}

	Animal (Animal &a) {
		name = string(a.name);
		legs = a.legs;
	}

	~Animal() {
		legs = 0;
	}

	void print() {
		cout << name << endl << legs << endl;
	}
};

int main() {
	Animal a;
	Animal b("b", 100);
	Animal c = b;

	a.print();
	b.print();
	c.print();

	return 0;
}
