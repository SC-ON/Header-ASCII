#include <iostream>
#include <ASCII.h>
using namespace std;

int main() {
	ASCII a;
	a.setChar('a');//like a.setInt(97)
	cout << "character:" << a.toChar() << " number:" << a.toInt() << " bin:" << a.toBin() << " oct:" << a.toOct() << " hex:"
	     <<
	     a.toHex() << endl;
	a.setChar(' ');//like a.setInt(32)
	cout << "character:" << a.toChar() << " number:" << a.toInt() << " bin:" << a.toBin() << " oct:" << a.toOct() << " hex:"
	     << a.toHex() << endl;
	cout << "! to Num: " << changeToNum('!') << ". 33 to character: " << changeToCharacter(33) << endl;
	cout << endl;
	return 0;
}