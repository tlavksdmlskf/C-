#include "iostream"
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	void setRadius(int r) { radius = r; };
	double getArea() { return 3.14 * radius * radius; };
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

int main() {
	cout << "�����ϰ��� �ϴ� ���� ����?";
	int n, radius;
	cin >> n;

	Circle *pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);

	}

	int count = 0;
	Circle *p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 && p->getArea() <= 200) {
			count++;
		}
		p++;
	}
	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;
	delete[] pArray;
}