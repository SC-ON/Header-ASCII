#include <iostream>
#include <ASCII>
using namespace std;

int main() {
	ASCII a;
	a.setChar('a');//like a.setInt(97)
	cout << "letter:" << a.toChar() << " number:" << a.toInt() << " bin:" << a.toBin() << " oct:" << a.toOct() << " hex:" <<
	     a.toHex();
	return 0;
}