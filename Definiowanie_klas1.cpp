#include <iostream>

using namespace std;

class Triangle {
public:
	int bok_a, bok_b, bok_c, h;

	float obliczPole() {
		int pole;
		pole = bok_b * h;
		return pole;
	}
	int obliczObwod() {
		int obw;
		obw = bok_a + bok_b + bok_c;
		return obw;
	}
};

int main()
{
	Triangle trojkat;
	trojkat.bok_a = 10;
	trojkat.bok_b = 11;
	trojkat.bok_c = 12;
	trojkat.h = 7;
	
	
	cout <<"Pole wynosi: " << trojkat.obliczPole() << endl;
	cout <<"Obwod wynosi: " << trojkat.obliczObwod() << endl;
}



