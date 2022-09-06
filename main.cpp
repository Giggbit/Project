#include <iostream>
using namespace std;


class Point {
private:
	int age;

public:
	Point(int a) {
		age = a;
	}
	int GetPoint() {
		return age;
	}

};


int main() {
	Point p(18);

}

