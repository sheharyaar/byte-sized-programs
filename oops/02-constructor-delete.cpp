#include <bits/stdc++.h>
using namespace std;

class Sample {
private:
	int val;
protected:
	Sample() {
		val = 0;
	}

	Sample(int v) {
		val = v;
	}

	void print() {
		cout << val << endl;
	}
};

class Sample2 : public Sample {

};

int main() {
	//Sample s;
	
	Sample2 s2;
	s2.print();

	return 0;
}
